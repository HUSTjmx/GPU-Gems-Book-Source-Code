
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:33 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_3DFX_tbuffer__
#define __GLUX_GL_3DFX_tbuffer__

GLUX_NEW_PLUGIN(GL_3DFX_tbuffer);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glTbufferMask3DFX
typedef void (APIENTRYP PFNGLUXTBUFFERMASK3DFXPROC) (GLuint mask);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glTbufferMask3DFX
extern PFNGLUXTBUFFERMASK3DFXPROC glTbufferMask3DFX;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
