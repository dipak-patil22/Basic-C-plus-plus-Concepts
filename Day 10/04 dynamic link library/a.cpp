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
  link /DLL b.obj c.obj /OUT:mydll.dll
- To produce executable out of the source file and the static library, execute following commands:
  cl /c a.cpp
  link a.obj mydll.lib /OUT:myexe.exe
- Note dll code is not copied in executable.
- Can a static library access symbols from another static library?
  Yes.
- Can a static library access symbols from dll?
  Yes.
- Can a dll access symbols from static library?
  Yes.
- Can a dll access symbols from another dll?
  Yes.


*/
