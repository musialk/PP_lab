#include <stdio.h>
#include <stdlib.h>

void suma(int a, int b)
{
	a=a+b;
	printf("Funckja: %d",a);	
}
void zmienTablice(int tab[])
{
	tab[0]=2*tab[0];
}

int main(int argc, char *argv[]) 
{
	int x=3;
	int t[2]={5,6};
	suma(x, 4);
	printf(" Wynik: %d", x);
	zmienTablice(t);
	printf("\ntab[0]: %d", x);
	
	return 0;
}
