#include <stdio.h>
#include <stdlib.h>


int sumaSzeregu(int n)
{
	if (n==1)
	return 1;
	else return n+sumaSzeregu(n-1);
}

int main (int arc, char *argv[])
{
	int n;
	printf("podaj n\n");
	scanf("%d", &n);
	printf ("Suma wynosi %d", sumaSzeregu(n));

	return 0;
}
	
	
	
	//for (i=1; i<n+1; i++);
	//wynik = wynik +i;
	//return 0;
//S(n-1)+n ?? dla n>1
//S(n-1)=S(n-2)+n-1
