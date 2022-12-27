#include <stdio.h>
#include <stdlib.h>

int ciag(int i, int a1, int q)
{
	if(i==1) return 1;
	return ciag(i-1, a1, q)*q;
	
}
int main (int argr, const char * argv[])
{
	int a1=1;
	int q=2;
	int i;
	printf("Podaj wartosc: ");
	scanf("%d", &i);
	printf("%d Wartosc wyrazu ciagu: %d\n", i, ciag(i,a1,q));
	
	return 0;
}
