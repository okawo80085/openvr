//========= Copyright Valve Corporation ============//

#pragma once

#ifndef __OPENVR_ASSERT
#define __OPENVR_ASSERT

#include <iostream>
// uncomment to disable throw on assert
// #define NDEBUG

// not the best assert but it works
void OPENVR_ASSERT(bool x, const char* msg) {
    if (!x) {
       std::cout << "Assert failed, ";
       std::cout << "line" << __LINE__ << ", ";
       std::cout << "file '" << __FILE__ << "': ";
       std::cout << msg << "\n";

   #ifndef NDEBUG
       throw;
   #endif
    }
}

// macro wrapper to fix define errors
#define AssertMsg(exp, msg) (OPENVR_ASSERT((exp), (msg)))

#endif // #ifndef __OPENVR_ASSERT