#include <iostream>
using namespace std;

void f() {
	int i = 1;
	cout << i << endl;
	i = i + 1;
}

int main() {
	f();
	f();
	f();
}

/*
- Lifetime of local variable is limited to the block.
- Everytime control exits 'f', 'i' variable is destroyed and
  is created freshly when control enters 'f' again.
- Since 'i' is getting created freshly, it is initialized to 1.
- Hence we get output 1 1 1 when above program is executed.
*/
