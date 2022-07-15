#ifndef MYLIB_H
#define MYLIB_H

#include "mylib_global.h"

namespace DuarteCorporation
{
class MYLIB_EXPORT Mylib
{
public:
    explicit Mylib();
    virtual ~Mylib();
    void start();
};

MYLIB_EXPORT void function1();
MYLIB_EXPORT void function2();
} // end namespace DuarteCorporation

#endif // MYLIB_H
