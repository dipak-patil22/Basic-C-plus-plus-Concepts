#include <stdio.h>

#include "b.h"
#include "c.h"

const double PI = 3.14;

int main() {
	int result = Add(1, 2);
	printf("result = %d\n", result);
	printf("PI = %lf\n", PI);

	if (iseven(4)) {
		printf("4 is an even number");
	}
	else {
		printf("4 is not an even number.");
	}
}

/*
- To build executable out of the multiple source files, execute following commands:
- cl /c a.cpp => produces a.obj
  cl /c b.cpp
  cl /c c.cpp
- link a.obj b.obj c.obj /OUT:myexe.exe => produces myexe.exe
*/
