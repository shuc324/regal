#!/usr/bin/python -B

from string import Template, upper, replace

from ApiUtil import outputCode
from ApiUtil import typeIsVoid

from ApiCodeGen import *

from RegalContextInfo import cond

from RegalDispatchShared import dispatchSourceTemplate, apiDispatchFuncInitCode

##############################################################################################

dispatchGlobalSourceTemplate = Template('''${AUTOGENERATED}
${LICENSE}

#include "pch.h" /* For MS precompiled header support */

#include "RegalUtil.h"

${IFDEF}REGAL_GLOBAL_BEGIN

#include <string>
using namespace std;

#include "RegalDispatch.h"
${LOCAL_INCLUDE}

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

${LOCAL_CODE}

${API_DISPATCH_FUNC_DEFINE}

void InitDispatchTable${DISPATCH_NAME}(DispatchTableGlobal &tbl)
{
  ${API_DISPATCH_FUNC_INIT}
}

REGAL_NAMESPACE_END

${ENDIF}''')

def apiStaticEGLFuncInitCode(apis, args):

  code = ''

  code += '// EGL global dispatch\n'

  for api in apis:
    if api.name=='egl':
      for function in api.functions:
        name   = function.name
        code += '  tbl.r%s = ::%s;\n' % ( name, name )

  return code

def generateStaticEGLSource(apis, args):

  code  = '\n'

  code += '#ifndef REGAL_NAMESPACE\n'
  code += '#error REGAL_STATIC_EGL requires REGAL_NAMESPACE\n'
  code += '#endif\n\n'

  for api in apis:
    if api.name=='egl':

      for function in api.functions:
        name   = function.name
        code += '#undef %s\n' % ( name )

      code += '\n'
      code += 'extern "C"\n'
      code += '{\n'

      for function in api.functions:
        params = paramsDefaultCode(function.parameters, True)
        rType  = typeCode(function.ret.type)
        code += '  extern %s REGAL_CALL %s(%s);\n' % (rType, function.name, params)

      code += '}\n'

  substitute = {}

  substitute['LICENSE']       = args.license
  substitute['AUTOGENERATED'] = args.generated
  substitute['COPYRIGHT']     = args.copyright
  substitute['DISPATCH_NAME'] = 'StaticEGL'
  substitute['LOCAL_INCLUDE'] = code
  substitute['LOCAL_CODE']    = ''
  substitute['API_DISPATCH_FUNC_DEFINE'] = ''
  substitute['API_DISPATCH_FUNC_INIT'] = apiStaticEGLFuncInitCode( apis, args )
  substitute['API_DISPATCH_GLOBAL_FUNC_INIT'] = ''
  substitute['IFDEF'] = '#if REGAL_SYS_EGL && REGAL_DRIVER && REGAL_STATIC_EGL\n\n'
  substitute['ENDIF'] = '#endif\n'

  outputCode( '%s/RegalDispatchStaticEGL.cpp' % args.srcdir, dispatchGlobalSourceTemplate.substitute(substitute))
