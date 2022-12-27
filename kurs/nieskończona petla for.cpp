#include <stdio.h>
unsigned long suma;
unsigned int liczba;
unsigned int tablica[100];
int licznik;
main()
{
	printf("Program wczytuje maksymalnie 100 liczb naturalnych do tablicy i oblicza ich sume\n");
	licznik=0; //zainicjowanie wartosci zmiennych
	suma=0;
	liczba=0;
	for( ; ; )
	{
		if((liczba==1)||(licznik==100))
		{
			break;
		}
		else
		{
			printf("podaj liczbe dodatni¹ z zakresu: 2-65535.");
			printf("podaj wartosc 1, aby wczeœniej zakonczyc dzialanie programu.\n");
			scanf("%u", &liczba);
			tablica[licznik]=liczba;licznik++;
			suma=suma+liczba;
		}
	}
	printf("wczytano %d liczb. Ich suma wynosi: %lu\n", liczba, suma);
	return 0;
}
