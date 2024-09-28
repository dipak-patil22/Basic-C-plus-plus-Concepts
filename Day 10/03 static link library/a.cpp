#include <stdio.h>

#include "b.h"
#include "c.h"

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
- To build static library out of the source files, execute following commands:
- cl /c b.cpp
  cl /c c.cpp
  lib b.obj c.obj /OUT:mylib.lib
- To produce executable out of the source file and the static library, execute following commands:
  cl /c a.cpp
  link a.obj mylib.lib /OUT:myexe.exe
- Note static library code is copied in executable.
  Becuase of this following issues happen:
  1. We will have to rebuild every executable that is built around the static library.
  2. This also creates problem is redistribution.
     A client using particular versioned executable should get respective versioned executable.
  3. Static linking also results into redundancy of code on disk and in memory.
*/
