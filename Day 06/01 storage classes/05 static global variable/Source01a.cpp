#include <iostream>
using namespace std;

static int i = 1;
int k();

int f() {
	return i;
}

int main() {
	cout << f() << endl;
	cout << k() << endl;
}

/*
- The lifetime of a static global variable is application wide.
- The scope however is translation unit wide in which it is defined.
- The location is global/static space.
- If multiple source files define static global variable with same
  name then it is perfectly valid. In that case each translation unit
  will have its own copy of respective global variable.
- Preprocessed source file is called as translation unit.
*/
