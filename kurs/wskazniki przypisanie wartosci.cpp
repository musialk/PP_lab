#include <stdio.h>

int main()
{
	int *p, q;
	p=&q;
	*p=200;
	
	printf("wartosc q wynosi: %d\n", q);
	return 0;
}
