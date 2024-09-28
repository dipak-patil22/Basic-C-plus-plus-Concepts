int main() {
	const int u = 1;	

	int *p = &u;		

	u = u + 1;			

	*p = *p + 1;		

	int v = 2;			

	p = &v;				
}