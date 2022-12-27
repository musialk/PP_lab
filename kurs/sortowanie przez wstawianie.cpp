#include<stdio.h>
int main()
{
	int n, wektor[1000], licznik, iter, temp;
	printf("Podaj liczbe elementow do sortowania\n");
	scanf("%d", &n);
	printf("Wprowadz %d liczb calkowitych\n", n);
	
	for(licznik=0; licznik<n; licznik++)
	{
		scanf("%d", &wektor[licznik]);
	}
	for (licznik=1; licznik<n; licznik++)
	{
		iter=licznik;
		while(iter>0&&wektor[iter]<wektor[iter-1])
		{
			temp			=wektor[iter];
			wektor[iter]	=wektor[iter-1];
			wektor[iter-1]	=temp;
			iter--;
		}
	}
	printf("Liczby posortowane rosn¹co: \n");
	for(licznik=0; licznik<n; licznik++)
	{
		printf("%d\n", wektor[licznik]);
	}
	return 0;
}
