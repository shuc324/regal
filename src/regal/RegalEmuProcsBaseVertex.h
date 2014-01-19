/* NOTE: Do not edit this file, it is generated by a script:
   E.py --api gl 4.4 --api wgl 4.4 --api glx 4.4 --api cgl 1.4 --api egl 1.0 --outdir .
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

#ifndef REGAL_EMU_PROCS_BASEVERTEX_H
#define REGAL_EMU_PROCS_BASEVERTEX_H

#include "RegalUtil.h"

#if REGAL_EMULATION

REGAL_GLOBAL_BEGIN

#include "RegalPrivate.h"
#include "RegalContext.h"
#include "RegalDispatch.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

void EmuProcsInterceptBaseVertex( Dispatch::GL & dt );

struct EmuProcsOriginateBaseVertex {

  EmuProcsOriginateBaseVertex() {
    memset(this, 0, sizeof( *this ) );
  }

  REGALGLBINDBUFFERPROC glBindBuffer;
  REGALGLBINDVERTEXARRAYPROC glBindVertexArray;
  REGALGLBINDVERTEXBUFFERPROC glBindVertexBuffer;
  REGALGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;
  REGALGLCLIENTACTIVETEXTUREARBPROC glClientActiveTextureARB;
  REGALGLCOLORPOINTERPROC glColorPointer;
  REGALGLDISABLEPROC glDisable;
  REGALGLDISABLECLIENTSTATEPROC glDisableClientState;
  REGALGLDISABLECLIENTSTATEINDEXEDEXTPROC glDisableClientStateIndexedEXT;
  REGALGLDISABLECLIENTSTATEIEXTPROC glDisableClientStateiEXT;
  REGALGLDISABLEINDEXEDEXTPROC glDisableIndexedEXT;
  REGALGLDISABLEVERTEXARRAYATTRIBEXTPROC glDisableVertexArrayAttribEXT;
  REGALGLDISABLEVERTEXARRAYEXTPROC glDisableVertexArrayEXT;
  REGALGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
  REGALGLDISABLEIPROC glDisablei;
  REGALGLDRAWELEMENTSPROC glDrawElements;
  REGALGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex;
  REGALGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;
  REGALGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glDrawElementsInstancedBaseInstance;
  REGALGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex;
  REGALGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glDrawElementsInstancedBaseVertexBaseInstance;
  REGALGLDRAWRANGEELEMENTSPROC glDrawRangeElements;
  REGALGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex;
  REGALGLEDGEFLAGPOINTERPROC glEdgeFlagPointer;
  REGALGLENABLEPROC glEnable;
  REGALGLENABLECLIENTSTATEPROC glEnableClientState;
  REGALGLENABLECLIENTSTATEINDEXEDEXTPROC glEnableClientStateIndexedEXT;
  REGALGLENABLECLIENTSTATEIEXTPROC glEnableClientStateiEXT;
  REGALGLENABLEINDEXEDEXTPROC glEnableIndexedEXT;
  REGALGLENABLEVERTEXARRAYATTRIBEXTPROC glEnableVertexArrayAttribEXT;
  REGALGLENABLEVERTEXARRAYEXTPROC glEnableVertexArrayEXT;
  REGALGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
  REGALGLENABLEIPROC glEnablei;
  REGALGLFOGCOORDPOINTERPROC glFogCoordPointer;
  REGALGLINDEXPOINTERPROC glIndexPointer;
  REGALGLINTERLEAVEDARRAYSPROC glInterleavedArrays;
  REGALGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex;
  REGALGLMULTITEXCOORDPOINTEREXTPROC glMultiTexCoordPointerEXT;
  REGALGLNORMALPOINTERPROC glNormalPointer;
  REGALGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;
  REGALGLSECONDARYCOLORPOINTERPROC glSecondaryColorPointer;
  REGALGLTEXCOORDPOINTERPROC glTexCoordPointer;
  REGALGLVERTEXARRAYCOLOROFFSETEXTPROC glVertexArrayColorOffsetEXT;
  REGALGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC glVertexArrayEdgeFlagOffsetEXT;
  REGALGLVERTEXARRAYFOGCOORDOFFSETEXTPROC glVertexArrayFogCoordOffsetEXT;
  REGALGLVERTEXARRAYINDEXOFFSETEXTPROC glVertexArrayIndexOffsetEXT;
  REGALGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC glVertexArrayMultiTexCoordOffsetEXT;
  REGALGLVERTEXARRAYNORMALOFFSETEXTPROC glVertexArrayNormalOffsetEXT;
  REGALGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC glVertexArraySecondaryColorOffsetEXT;
  REGALGLVERTEXARRAYTEXCOORDOFFSETEXTPROC glVertexArrayTexCoordOffsetEXT;
  REGALGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC glVertexArrayVertexAttribIOffsetEXT;
  REGALGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC glVertexArrayVertexAttribOffsetEXT;
  REGALGLVERTEXARRAYVERTEXOFFSETEXTPROC glVertexArrayVertexOffsetEXT;
  REGALGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding;
  REGALGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;
  REGALGLVERTEXATTRIBFORMATPROC glVertexAttribFormat;
  REGALGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat;
  REGALGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;
  REGALGLVERTEXATTRIBLFORMATPROC glVertexAttribLFormat;
  REGALGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer;
  REGALGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
  REGALGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor;
  REGALGLVERTEXPOINTERPROC glVertexPointer;

  void Initialize( Dispatch::GL & dt ) {
    glBindBuffer = dt.glBindBuffer;
    glBindVertexArray = dt.glBindVertexArray;
    glBindVertexBuffer = dt.glBindVertexBuffer;
    glClientActiveTexture = dt.glClientActiveTexture;
    glClientActiveTextureARB = dt.glClientActiveTextureARB;
    glColorPointer = dt.glColorPointer;
    glDisable = dt.glDisable;
    glDisableClientState = dt.glDisableClientState;
    glDisableClientStateIndexedEXT = dt.glDisableClientStateIndexedEXT;
    glDisableClientStateiEXT = dt.glDisableClientStateiEXT;
    glDisableIndexedEXT = dt.glDisableIndexedEXT;
    glDisableVertexArrayAttribEXT = dt.glDisableVertexArrayAttribEXT;
    glDisableVertexArrayEXT = dt.glDisableVertexArrayEXT;
    glDisableVertexAttribArray = dt.glDisableVertexAttribArray;
    glDisablei = dt.glDisablei;
    glDrawElements = dt.glDrawElements;
    glDrawElementsBaseVertex = dt.glDrawElementsBaseVertex;
    glDrawElementsInstanced = dt.glDrawElementsInstanced;
    glDrawElementsInstancedBaseInstance = dt.glDrawElementsInstancedBaseInstance;
    glDrawElementsInstancedBaseVertex = dt.glDrawElementsInstancedBaseVertex;
    glDrawElementsInstancedBaseVertexBaseInstance = dt.glDrawElementsInstancedBaseVertexBaseInstance;
    glDrawRangeElements = dt.glDrawRangeElements;
    glDrawRangeElementsBaseVertex = dt.glDrawRangeElementsBaseVertex;
    glEdgeFlagPointer = dt.glEdgeFlagPointer;
    glEnable = dt.glEnable;
    glEnableClientState = dt.glEnableClientState;
    glEnableClientStateIndexedEXT = dt.glEnableClientStateIndexedEXT;
    glEnableClientStateiEXT = dt.glEnableClientStateiEXT;
    glEnableIndexedEXT = dt.glEnableIndexedEXT;
    glEnableVertexArrayAttribEXT = dt.glEnableVertexArrayAttribEXT;
    glEnableVertexArrayEXT = dt.glEnableVertexArrayEXT;
    glEnableVertexAttribArray = dt.glEnableVertexAttribArray;
    glEnablei = dt.glEnablei;
    glFogCoordPointer = dt.glFogCoordPointer;
    glIndexPointer = dt.glIndexPointer;
    glInterleavedArrays = dt.glInterleavedArrays;
    glMultiDrawElementsBaseVertex = dt.glMultiDrawElementsBaseVertex;
    glMultiTexCoordPointerEXT = dt.glMultiTexCoordPointerEXT;
    glNormalPointer = dt.glNormalPointer;
    glPrimitiveRestartIndex = dt.glPrimitiveRestartIndex;
    glSecondaryColorPointer = dt.glSecondaryColorPointer;
    glTexCoordPointer = dt.glTexCoordPointer;
    glVertexArrayColorOffsetEXT = dt.glVertexArrayColorOffsetEXT;
    glVertexArrayEdgeFlagOffsetEXT = dt.glVertexArrayEdgeFlagOffsetEXT;
    glVertexArrayFogCoordOffsetEXT = dt.glVertexArrayFogCoordOffsetEXT;
    glVertexArrayIndexOffsetEXT = dt.glVertexArrayIndexOffsetEXT;
    glVertexArrayMultiTexCoordOffsetEXT = dt.glVertexArrayMultiTexCoordOffsetEXT;
    glVertexArrayNormalOffsetEXT = dt.glVertexArrayNormalOffsetEXT;
    glVertexArraySecondaryColorOffsetEXT = dt.glVertexArraySecondaryColorOffsetEXT;
    glVertexArrayTexCoordOffsetEXT = dt.glVertexArrayTexCoordOffsetEXT;
    glVertexArrayVertexAttribIOffsetEXT = dt.glVertexArrayVertexAttribIOffsetEXT;
    glVertexArrayVertexAttribOffsetEXT = dt.glVertexArrayVertexAttribOffsetEXT;
    glVertexArrayVertexOffsetEXT = dt.glVertexArrayVertexOffsetEXT;
    glVertexAttribBinding = dt.glVertexAttribBinding;
    glVertexAttribDivisor = dt.glVertexAttribDivisor;
    glVertexAttribFormat = dt.glVertexAttribFormat;
    glVertexAttribIFormat = dt.glVertexAttribIFormat;
    glVertexAttribIPointer = dt.glVertexAttribIPointer;
    glVertexAttribLFormat = dt.glVertexAttribLFormat;
    glVertexAttribLPointer = dt.glVertexAttribLPointer;
    glVertexAttribPointer = dt.glVertexAttribPointer;
    glVertexBindingDivisor = dt.glVertexBindingDivisor;
    glVertexPointer = dt.glVertexPointer;
  }
};

REGAL_NAMESPACE_END

#endif // REGAL_EMULATION

#endif // REGAL_EMU_PROCS_BASEVERTEX_H
