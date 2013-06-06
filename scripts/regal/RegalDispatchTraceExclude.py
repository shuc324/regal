# we need to exclude these functions from the dispatch becuse they do not exist in apitrace
exclude = [
  "glIsPathNV",
  "glOrthofOES",
  "glCopyPathNV",
  "glGenPathsNV",
  "glEndSceneEXT",
  "glFrustumfOES",
  "glIsSyncAPPLE",
  "glVDPAUFiniNV",
  "glVDPAUInitNV",
  "glLightEnviEXT",
  "glPathCoordsNV",
  "glPathFogGenNV",
  "glPathGlyphsNV",
  "glPathStringNV",
  "glPathTexGenNV",
  "glAlphaFuncQCOM",
  "glBeginSceneEXT",
  "glClipPlanefOES",
  "glDeletePathsNV",
  "glEndTilingQCOM",
  "glWaitSyncAPPLE",
  "glWeightPathsNV",
  "glClearDepthfOES",
  "glDepthRangefOES",
  "glFenceSyncAPPLE",
  "glGetFloati_vEXT",
  "glGetSyncivAPPLE",
  "glPathColorGenNV",
  "glPathCommandsNV",
  "glReadnPixelsEXT",
  "glTextureFogSGIX",
  "glCoverFillPathNV",
  "glDeleteSyncAPPLE",
  "glGetDoublei_vEXT",
  "glGetPathCoordsNV",
  "glGetPathLengthNV",
  "glPathDashArrayNV",
  "glPathSubCoordsNV",
  "glStartTilingQCOM",
  "glTexScissorINTEL",
  "glTexStorage1DEXT",
  "glTexStorage2DEXT",
  "glTexStorage3DEXT",
  "glTransformPathNV",
  "glGetClipPlanefOES",
  "glGetImageHandleNV",
  "glGetIntegeri_vEXT",
  "glGetPathMetricsNV",
  "glGetPathSpacingNV",
  "glGetPointeri_vEXT",
  "glGetnUniformfvEXT",
  "glGetnUniformivEXT",
  "glPathGlyphRangeNV",
  "glPathParameterfNV",
  "glPathParameteriNV",
  "glPointAlongPathNV",
  "glVDPAUIsSurfaceNV",
  "glWeightPointerOES",
  "glBlitFramebufferNV",
  "glCoverStrokePathNV",
  "glExtGetBuffersQCOM",
  "glExtGetShadersQCOM",
  "glFragmentLightfEXT",
  "glFragmentLightiEXT",
  "glGetPathCommandsNV",
  "glGetPathTexGenfvNV",
  "glGetPathTexGenivNV",
  "glMapBufferRangeEXT",
  "glPathParameterfvNV",
  "glPathParameterivNV",
  "glPathStencilFuncNV",
  "glPathSubCommandsNV",
  "glStencilFillPathNV",
  "glStencilOpValueAMD",
  "glExtGetProgramsQCOM",
  "glExtGetTexturesQCOM",
  "glFragmentLightfvEXT",
  "glFragmentLightivEXT",
  "glGetInteger64vAPPLE",
  "glGetPathDashArrayNV",
  "glGetTextureHandleNV",
  "glInterpolatePathsNV",
  "glMultiTexImage1DEXT",
  "glMultiTexImage2DEXT",
  "glMultiTexImage3DEXT",
  "glReadVideoPixelsSUN",
  "glVDPAUMapSurfacesNV",
  "glClientWaitSyncAPPLE",
  "glGetPathColorGenfvNV",
  "glGetPathColorGenivNV",
  "glIsPointInFillPathNV",
  "glStencilStrokePathNV",
  "glTexScissorFuncINTEL",
  "glUniformHandleui64NV",
  "glVDPAUGetSurfaceivNV",
  "glFragmentMaterialfEXT",
  "glFragmentMaterialiEXT",
  "glGetPathMetricRangeNV",
  "glGetPathParameterfvNV",
  "glGetPathParameterivNV",
  "glPathCoverDepthFuncNV",
  "glReadBufferIndexedEXT",
  "glUniformHandleui64vNV",
  "glVDPAUSurfaceAccessNV",
  "glVDPAUUnmapSurfacesNV",
  "glDrawBuffersIndexedEXT",
  "glEnableClientStateiEXT",
  "glExtGetTexSubImageQCOM",
  "glFragmentMaterialfvEXT",
  "glFragmentMaterialivEXT",
  "glGetDriverControlsQCOM",
  "glGetFragmentLightfvEXT",
  "glGetFragmentLightivEXT",
  "glIsPointInStrokePathNV",
  "glMatrixIndexPointerOES",
  "glCopyTextureLevelsAPPLE",
  "glDisableClientStateiEXT",
  "glExtGetFramebuffersQCOM",
  "glExtIsProgramBinaryQCOM",
  "glFragmentLightModelfEXT",
  "glFragmentLightModeliEXT",
  "glFramebufferTextureFace",
  "glEnableDriverControlQCOM",
  "glEndConditionalRenderNVX",
  "glExtGetRenderbuffersQCOM",
  "glFragmentLightModelfvEXT",
  "glFragmentLightModelivEXT",
  "glIsImageHandleResidentNV",
  "glLogMessageCallbackREGAL",
  "glCoverFillPathInstancedNV",
  "glCreateSyncFromCLeventARB",
  "glDisableDriverControlQCOM",
  "glDrawArraysInstancedANGLE",
  "glExtGetBufferPointervQCOM",
  "glFragmentColorMaterialEXT",
  "glGetFragmentMaterialfvEXT",
  "glGetFragmentMaterialivEXT",
  "glPathStencilDepthOffsetNV",
  "glVDPAUUnregisterSurfaceNV",
  "glVertexAttribDivisorANGLE",
  "glBeginConditionalRenderNVX",
  "glFlushMappedBufferRangeEXT",
  "glGetTextureSamplerHandleNV",
  "glIsTextureHandleResidentNV",
  "glMakeImageHandleResidentNV",
  "glClearNamedBufferSubDataEXT",
  "glCoverStrokePathInstancedNV",
  "glDrawElementsInstancedANGLE",
  "glGetDriverControlStringQCOM",
  "glProgramUniformHandleui64NV",
  "glStencilFillPathInstancedNV",
  "glMakeTextureHandleResidentNV",
  "glProgramUniformHandleui64vNV",
  "glVDPAURegisterVideoSurfaceNV",
  "glMakeImageHandleNonResidentNV",
  "glStencilStrokePathInstancedNV",
  "glVDPAURegisterOutputSurfaceNV",
  "glExtGetProgramBinarySourceQCOM",
  "glExtGetTexLevelParameterivQCOM",
  "glExtTexObjectStateOverrideiQCOM",
  "glGetTranslatedShaderSourceANGLE",
  "glMakeTextureHandleNonResidentNV",
  "glGetPixelTransformParameterfvEXT",
  "glGetPixelTransformParameterivEXT",
  "glFramebufferTexture2DMultisampleEXT",
  "glDrawTextureNV",
  "glGetQueryObjectivEXT",
  "glQueryCounterEXT",

  'eglStreamConsumerAcquireKHR',
  'eglStreamConsumerGLTextureExternalKHR',
  'eglStreamConsumerReleaseKHR',
  'eglCreateStreamFromFileDescriptorKHR',
  'eglGetStreamFileDescriptorKHR',
  'eglCreateStreamProducerSurfaceKHR',
  'eglWaitSyncKHR',
  'eglCoverageMaskNV',
  'eglCoverageOperationNV',

  "glXGetVideoDeviceNV",
  "glXEnumerateVideoDevicesNV",
  "glXDeleteAssociatedContextAMD",
  "glXCreateAssociatedContextAttribsAMD",
  "glXMakeAssociatedContextCurrentAMD",
  "glXGetGPUInfoAMD",
  "glXVideoResizeSUN",
  "glXSendPbufferToVideoNV",
  "glXEnumerateVideoCaptureDevicesNV",
  "glXBindVideoDeviceNV",
  "glXGetVideoResizeSUN",
  "glXGetVideoInfoNV",
  "glXDrawableAttribATI",
  "glXReleaseVideoImageNV",
  "glXLockVideoCaptureDeviceNV",
  "glXCreateAssociatedContextAMD",
  "glXGetCurrentAssociatedContextAMD",
  "glXBlitContextFramebufferAMD",
  "glXBindVideoImageNV",
  "glXReleaseVideoCaptureDeviceNV",
  "glXQueryVideoCaptureDeviceNV",
  "glXChooseFBConfigSGIX",
  "glXBindTexImageATI",
  "glXReleaseTexImageATI",
  "glXGetContextGPUIDAMD",
  "glXGetGPUIDsAMD",
  "glXBindVideoCaptureDeviceNV",
  "glXGetTransparentIndexSUN",
  "glXReleaseVideoDeviceNV"
]
