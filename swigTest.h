#ifndef SWIG_TEST_H
#define SWIG_TEST_H

#define IN
#define OUT
#define INOUT

#include "swigTest_def.h"

#ifdef _USRDLL
#define FUNCTION_IMPORTEXPORT __declspec(dllexport)
#else
#define FUNCTION_IMPORTEXPORT __declspec(dllimport)
#endif

typedef void *INTERFACE_HANDLE;

#endif // SWIG_TEST_H