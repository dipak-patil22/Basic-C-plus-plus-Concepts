#pragma once

#if defined(MYDLLEXPORTS)
#define EXPIMP  _declspec(dllexport)
#else
#define EXPIMP  _declspec(dllimport)
#endif

EXPIMP bool iseven(int n);
