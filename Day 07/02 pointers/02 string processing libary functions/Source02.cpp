#include <cstring>
#include <iostream>
using  namespace std;

int main() {
	const char* s1 = "Hi";
	const char* s2 = "Hello";
	const char* s3 = "hello";
	const char* s4 = "Hello";

	int result = 0;

	result = strcmp(s1, s2); // +1
	result = strcmp(s2, s3); // -1
	result = strcmp(s2, s4); // 0
}