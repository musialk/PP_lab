#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b)
{
	int wynik;
	wynik=a+b;
	return wynik;	
}

int main(int argc, char *argv[]) 
{
	int x=3;
	int w;
	w=suma(x, 4);
	printf("Wynik: %d", w);
	
	return 0;
}
