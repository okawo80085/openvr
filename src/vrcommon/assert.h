#pragma once

#ifndef __OPENVR_ASSERT
#define __OPENVR_ASSERT

#include <iostream>
// uncomment to disable assert()
// #define NDEBUG

void OPENVR_ASSERT(bool x) {
    if (!x) {
       std::cout<<"Error!!Assert failed\n";
       std::cout<<"on line"<<__LINE__<<"\n";
       std::cout<<"in file"<<__FILE__<<"\n";
       throw;
    }
}
#define assert(x) OPENVR_ASSERT(x)


 
// Use (void) to silent unused warnings.
#define AssertMsg(exp, msg) (assert(exp))

#endif // #ifndef __OPENVR_ASSERT