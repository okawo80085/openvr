//========= Copyright Valve Corporation ============//

#pragma once

#ifndef OPENVR_ASSERT_LIB_H
#define OPENVR_ASSERT_LIB_H

#include <iostream>
// uncomment to disable throw on assert
// #define NDEBUG

// not the best assert but it works
inline void __OPENVR_ASSERT(bool x, const char* msg) {
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

// fix for <cassert> includes,
// because cassert and assert.h includes will include this header
// the proper way to fix this issue is to rename this file
// to literally anything except assert.h, but for now this will do
#define assert(exp) (__OPENVR_ASSERT((exp), ""))

// macro wrapper to fix define errors
#define AssertMsg(exp, msg) (__OPENVR_ASSERT((exp), (msg)))

#endif // #ifndef OPENVR_ASSERT_LIB_H