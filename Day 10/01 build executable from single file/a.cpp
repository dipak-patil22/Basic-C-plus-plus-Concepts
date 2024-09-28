#include <stdio.h>

int Add(int u, int v);

const double PI = 3.14;

int main() {
	int result = Add(1, 2);
	printf("result = %d\n", result);
	printf("PI = %lf\n", PI);
}

int Add(int u, int v) {
	return u + v;
}

/*
- To build executable out of the single source file, execute following commands:
- cl /c a.cpp => produces a.obj
- link a.obj => produces a.exe
- To produce myexe.exe /OUT option need to be supplied to link command.
  link a.obj /OUT:myexe.exe => produces myexe.exe
*/
