#include<stdio.h>

int zakres = 20;
int tablica[zakres];
int i, suma;
float srednia;

int main()
{
	srednia=0.0;
	suma=0;
	for(i=0;i<zakres;i++)
	{
		printf("podaj: tablica[%d]=", i);
		scanf("%d", &tablica[i]);
		printf("\n");
	}
	for(i=0;i<zakres;i++)
	{
		suma=suma+tablica[i];
	}
	srednia=suma/zakres;
	printf("wartosc srednia elementow tablicy wynosi %f\n", srednia);
	return 0;
}
