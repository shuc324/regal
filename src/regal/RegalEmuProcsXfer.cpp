/* NOTE: Do not edit this file, it is generated by a script:
   Export.py --api gl 4.4 --api wgl 4.4 --api glx 4.4 --api cgl 1.4 --api egl 1.0 --outdir .
*/

/*
  Copyright (c) 2011-2013 NVIDIA Corporation
  Copyright (c) 2011-2013 Cass Everitt
  Copyright (c) 2012-2013 Scott Nations
  Copyright (c) 2012 Mathias Schott
  Copyright (c) 2012-2013 Nigel Stewart
  Copyright (c) 2012-2013 Google Inc.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without modification,
  are permitted provided that the following conditions are met:

    Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.

    Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
  OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
  Intended formatting conventions:
  $ astyle --style=allman --indent=spaces=2 --indent-switches
*/

#include "RegalUtil.h"

#if REGAL_EMULATION

REGAL_GLOBAL_BEGIN

#include "RegalPrivate.h"
#include "RegalContext.h"
#include "RegalDispatch.h"
#include "RegalXfer.h"
#include "RegalEmuProcsXfer.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

static void REGAL_CALL emuProcInterceptXfer_glActiveTexture(GLenum texture)
{
  RegalContext *_context = REGAL_GET_CONTEXT();
  RegalAssert(_context);

  // prefix
  _context->xfer->ShadowActiveTexture( texture );

}

static void REGAL_CALL emuProcInterceptXfer_glActiveTextureARB(GLenum texture)
{
  RegalContext *_context = REGAL_GET_CONTEXT();
  RegalAssert(_context);

  // prefix
  _context->xfer->ShadowActiveTexture( texture );

}

static void REGAL_CALL emuProcInterceptXfer_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
{
  RegalContext *_context = REGAL_GET_CONTEXT();
  RegalAssert(_context);

  // impl
  _context->xfer->CompressedTexImage2D( _context, target, level, internalformat, width, height, border, imageSize, data );

}

static void REGAL_CALL emuProcInterceptXfer_glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data)
{
  RegalContext *_context = REGAL_GET_CONTEXT();
  RegalAssert(_context);

  // impl
  _context->xfer->CompressedTexImage2D( _context, target, level, internalformat, width, height, border, imageSize, data );

}

static void REGAL_CALL emuProcInterceptXfer_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
{
  RegalContext *_context = REGAL_GET_CONTEXT();
  RegalAssert(_context);

  // impl
  _context->xfer->CompressedTexSubImage2D( _context, target, level, xoffset, yoffset, width, height, format, imageSize, data );

}

static void REGAL_CALL emuProcInterceptXfer_glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data)
{
  RegalContext *_context = REGAL_GET_CONTEXT();
  RegalAssert(_context);

  // impl
  _context->xfer->CompressedTexSubImage2D( _context, target, level, xoffset, yoffset, width, height, format, imageSize, data );

}

static void REGAL_CALL emuProcInterceptXfer_glPixelStoref(GLenum pname, GLfloat param)
{
  RegalContext *_context = REGAL_GET_CONTEXT();
  RegalAssert(_context);

  // prefix
  _context->xfer->PixelStore( _context, pname, param );

}

static void REGAL_CALL emuProcInterceptXfer_glPixelStorei(GLenum pname, GLint param)
{
  RegalContext *_context = REGAL_GET_CONTEXT();
  RegalAssert(_context);

  // prefix
  _context->xfer->PixelStore( _context, pname, param );

}

static void REGAL_CALL emuProcInterceptXfer_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
{
  RegalContext *_context = REGAL_GET_CONTEXT();
  RegalAssert(_context);

  // impl
  _context->xfer->TexImage2D( _context, target, level, internalformat, width, height, border, format, type, pixels );

}

static void REGAL_CALL emuProcInterceptXfer_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
  RegalContext *_context = REGAL_GET_CONTEXT();
  RegalAssert(_context);

  // impl
  _context->xfer->TexSubImage2D( _context, target, level, xoffset, yoffset, width, height, format, type, pixels );

}

static void REGAL_CALL emuProcInterceptXfer_glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
  RegalContext *_context = REGAL_GET_CONTEXT();
  RegalAssert(_context);

  // impl
  _context->xfer->TexSubImage2D( _context, target, level, xoffset, yoffset, width, height, format, type, pixels );

}

void EmuProcsInterceptXfer( Dispatch::GL & dt ) {
  dt.glActiveTexture              = emuProcInterceptXfer_glActiveTexture;
  dt.glActiveTextureARB           = emuProcInterceptXfer_glActiveTextureARB;
  dt.glCompressedTexImage2D       = emuProcInterceptXfer_glCompressedTexImage2D;
  dt.glCompressedTexImage2DARB    = emuProcInterceptXfer_glCompressedTexImage2DARB;
  dt.glCompressedTexSubImage2D    = emuProcInterceptXfer_glCompressedTexSubImage2D;
  dt.glCompressedTexSubImage2DARB = emuProcInterceptXfer_glCompressedTexSubImage2DARB;
  dt.glPixelStoref                = emuProcInterceptXfer_glPixelStoref;
  dt.glPixelStorei                = emuProcInterceptXfer_glPixelStorei;
  dt.glTexImage2D                 = emuProcInterceptXfer_glTexImage2D;
  dt.glTexSubImage2D              = emuProcInterceptXfer_glTexSubImage2D;
  dt.glTexSubImage2DEXT           = emuProcInterceptXfer_glTexSubImage2DEXT;
}

REGAL_NAMESPACE_END

#endif // REGAL_EMULATION
