#include <cstring>

#define N 32

int main() {
	const char * ps = "Hello";
	int len = strlen(ps); // strlen returns number of characters in given string. null is not counted.

	char t[N];
	strcpy_s(t, N, ps);
	strcat_s(t, N, " World");
}