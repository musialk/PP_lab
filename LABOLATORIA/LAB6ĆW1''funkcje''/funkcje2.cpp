#include <stdio.h>
#include <stdlib.h>

void suma(int a, int b)
{
	a=a+b;
	printf("Funckja: %d",a);
		
}

int main(int argc, char *argv[]) 
{
	int x=3;
	suma(x, 4);
	printf("Wynik: %d", x);
	
	return 0;
}
