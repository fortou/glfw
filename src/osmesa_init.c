//========================================================================
// GLFW 3.3 OSMesa - www.glfw.org
//------------------------------------------------------------------------
// Copyright (c) 2016 Google Inc.
// Copyright (c) 2006-2016 Camilla Berglund <elmindreda@glfw.org>
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would
//    be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not
//    be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source
//    distribution.
//
//========================================================================

#include "internal.h"


//////////////////////////////////////////////////////////////////////////
//////                       GLFW platform API                      //////
//////////////////////////////////////////////////////////////////////////

int _glfwPlatformInit(void)
{
    if (!_glfwInitThreadLocalStoragePOSIX())
        return GLFW_FALSE;

    _glfwInitTimerPOSIX();
    return GLFW_TRUE;
}

void _glfwPlatformTerminate(void)
{
    _glfwTerminateOSMesa();
    _glfwTerminateThreadLocalStoragePOSIX();
}

const char* _glfwPlatformGetVersionString(void)
{
    return _GLFW_VERSION_NUMBER " none OSMesa";
}
