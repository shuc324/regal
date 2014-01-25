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

#ifndef REGAL_LAYER_PPCA_PROCS_H
#define REGAL_LAYER_PPCA_PROCS_H

#include "RegalUtil.h"

REGAL_GLOBAL_BEGIN

#include "RegalPrivate.h"
#include "RegalContext.h"
#include "RegalDispatch.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

void PpcaIntercept( Layer *layer, Dispatch::GL & dt );

// glBindBuffer
// glBindVertexArray
// glBindVertexBuffer
// glBindVertexBuffers
// glClientActiveTexture
// glClientActiveTextureARB
// glClientAttribDefaultEXT
// glColorPointer
// glDeleteBuffers
// glDeleteVertexArrays
// glDisable
// glDisableClientState
// glDisableClientStateIndexedEXT
// glDisableClientStateiEXT
// glDisableIndexedEXT
// glDisableVertexArrayAttribEXT
// glDisableVertexArrayEXT
// glDisableVertexAttribArray
// glDisablei
// glEdgeFlagPointer
// glEnable
// glEnableClientState
// glEnableClientStateIndexedEXT
// glEnableClientStateiEXT
// glEnableIndexedEXT
// glEnableVertexArrayAttribEXT
// glEnableVertexArrayEXT
// glEnableVertexAttribArray
// glEnablei
// glFogCoordPointer
// glGetBooleanv
// glGetDoublev
// glGetFloatv
// glGetIntegerv
// glIndexPointer
// glInterleavedArrays
// glMultiTexCoordPointerEXT
// glNormalPointer
// glPixelStoref
// glPixelStorei
// glPopClientAttrib
// glPrimitiveRestartIndex
// glPushClientAttrib
// glPushClientAttribDefaultEXT
// glSecondaryColorPointer
// glTexCoordPointer
// glVertexArrayColorOffsetEXT
// glVertexArrayEdgeFlagOffsetEXT
// glVertexArrayFogCoordOffsetEXT
// glVertexArrayIndexOffsetEXT
// glVertexArrayMultiTexCoordOffsetEXT
// glVertexArrayNormalOffsetEXT
// glVertexArraySecondaryColorOffsetEXT
// glVertexArrayTexCoordOffsetEXT
// glVertexArrayVertexAttribIOffsetEXT
// glVertexArrayVertexAttribOffsetEXT
// glVertexArrayVertexOffsetEXT
// glVertexAttribBinding
// glVertexAttribDivisor
// glVertexAttribFormat
// glVertexAttribIFormat
// glVertexAttribIPointer
// glVertexAttribLFormat
// glVertexAttribLPointer
// glVertexAttribPointer
// glVertexBindingDivisor
// glVertexPointer
struct PpcaOriginate {

  PpcaOriginate() {
    memset(this, 0, sizeof( *this ) );
  }

  REGALGLBINDBUFFERPROC glBindBuffer;

  REGALGLBINDVERTEXARRAYPROC glBindVertexArray;

  REGALGLBINDVERTEXBUFFERPROC glBindVertexBuffer;

  REGALGLBINDVERTEXBUFFERSPROC glBindVertexBuffers;

  REGALGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;

  REGALGLCLIENTACTIVETEXTUREARBPROC glClientActiveTextureARB;

  REGALGLCLIENTATTRIBDEFAULTEXTPROC glClientAttribDefaultEXT;

  REGALGLCOLORPOINTERPROC glColorPointer;

  REGALGLDELETEBUFFERSPROC glDeleteBuffers;

  REGALGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;

  REGALGLDISABLEPROC glDisable;

  REGALGLDISABLECLIENTSTATEPROC glDisableClientState;

  REGALGLDISABLECLIENTSTATEINDEXEDEXTPROC glDisableClientStateIndexedEXT;

  REGALGLDISABLECLIENTSTATEIEXTPROC glDisableClientStateiEXT;

  REGALGLDISABLEINDEXEDEXTPROC glDisableIndexedEXT;

  REGALGLDISABLEVERTEXARRAYATTRIBEXTPROC glDisableVertexArrayAttribEXT;

  REGALGLDISABLEVERTEXARRAYEXTPROC glDisableVertexArrayEXT;

  REGALGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;

  REGALGLDISABLEIPROC glDisablei;

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

  REGALGLGETBOOLEANVPROC glGetBooleanv;

  REGALGLGETDOUBLEVPROC glGetDoublev;

  REGALGLGETFLOATVPROC glGetFloatv;

  REGALGLGETINTEGERVPROC glGetIntegerv;

  REGALGLINDEXPOINTERPROC glIndexPointer;

  REGALGLINTERLEAVEDARRAYSPROC glInterleavedArrays;

  REGALGLMULTITEXCOORDPOINTEREXTPROC glMultiTexCoordPointerEXT;

  REGALGLNORMALPOINTERPROC glNormalPointer;

  REGALGLPIXELSTOREFPROC glPixelStoref;

  REGALGLPIXELSTOREIPROC glPixelStorei;

  REGALGLPOPCLIENTATTRIBPROC glPopClientAttrib;

  REGALGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;

  REGALGLPUSHCLIENTATTRIBPROC glPushClientAttrib;

  REGALGLPUSHCLIENTATTRIBDEFAULTEXTPROC glPushClientAttribDefaultEXT;

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

    glBindVertexBuffers = dt.glBindVertexBuffers;

    glClientActiveTexture = dt.glClientActiveTexture;

    glClientActiveTextureARB = dt.glClientActiveTextureARB;

    glClientAttribDefaultEXT = dt.glClientAttribDefaultEXT;

    glColorPointer = dt.glColorPointer;

    glDeleteBuffers = dt.glDeleteBuffers;

    glDeleteVertexArrays = dt.glDeleteVertexArrays;

    glDisable = dt.glDisable;

    glDisableClientState = dt.glDisableClientState;

    glDisableClientStateIndexedEXT = dt.glDisableClientStateIndexedEXT;

    glDisableClientStateiEXT = dt.glDisableClientStateiEXT;

    glDisableIndexedEXT = dt.glDisableIndexedEXT;

    glDisableVertexArrayAttribEXT = dt.glDisableVertexArrayAttribEXT;

    glDisableVertexArrayEXT = dt.glDisableVertexArrayEXT;

    glDisableVertexAttribArray = dt.glDisableVertexAttribArray;

    glDisablei = dt.glDisablei;

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

    glGetBooleanv = dt.glGetBooleanv;

    glGetDoublev = dt.glGetDoublev;

    glGetFloatv = dt.glGetFloatv;

    glGetIntegerv = dt.glGetIntegerv;

    glIndexPointer = dt.glIndexPointer;

    glInterleavedArrays = dt.glInterleavedArrays;

    glMultiTexCoordPointerEXT = dt.glMultiTexCoordPointerEXT;

    glNormalPointer = dt.glNormalPointer;

    glPixelStoref = dt.glPixelStoref;

    glPixelStorei = dt.glPixelStorei;

    glPopClientAttrib = dt.glPopClientAttrib;

    glPrimitiveRestartIndex = dt.glPrimitiveRestartIndex;

    glPushClientAttrib = dt.glPushClientAttrib;

    glPushClientAttribDefaultEXT = dt.glPushClientAttribDefaultEXT;

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

#endif // REGAL_LAYER_PPCA_PROCS_H