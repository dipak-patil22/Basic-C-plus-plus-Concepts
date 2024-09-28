#pragma once

#if defined(MYDLLEXPORTS)
#define EXPIMP  _declspec(dllexport)
#else
#define EXPIMP  _declspec(dllimport)
#endif

EXPIMP int Add(int u, int v);

extern const EXPIMP double PI;
