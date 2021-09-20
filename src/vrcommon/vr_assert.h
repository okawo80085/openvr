//========= Copyright Valve Corporation ============//

#pragma once

#ifndef OPENVR_ASSERT_LIB_H
#define OPENVR_ASSERT_LIB_H

#include <iostream>
#include <cassert>

// not the best assert but it works
inline void __OPENVR_ASSERT(bool x, const char* msg) {
    if (!x) {
       std::cout << "Assert failed, ";
       std::cout << "line" << __LINE__ << ", ";
       std::cout << "file '" << __FILE__ << "': ";
       std::cout << msg << "\n";
    }

    assert(x);
}

// macro wrapper to fix define errors
#define AssertMsg(exp, msg) (__OPENVR_ASSERT((exp), (msg)))

#endif // #ifndef OPENVR_ASSERT_LIB_H