#include <stdio.h>

int main()
{
	int x;
	printf ("wpisz liczbe x: ");
	scanf ("%d", &x);
	
	switch (x)
	{
		case 1: printf("wybrano1"); break;
		case 2: printf("wybrano2"); break;
		case 3: printf("wybrano3"); break;
		default: printf("wybrana inna niz 1 2 3"); break;
	
	}
	return 0;
}


