#include <iostream>

int main()
{
	int n;	//zmienna przechowujaca ilosc porownywanych ze soba liczba
	int test;	//zmienna przechowujaca najmniejsza dotychczas wpisana liczbe
	printf("podaj ilosc liczb:\n");	
	scanf("%d",&n);		//pobranie ilosci liczb do por�wnania
	//printf("Odczytanow : %d",n);
	
	int tablica[n];			//deklaracja tablicy przechowujacej liczby do porownania
	for (int i = 0 ; i < n ; i++)	//petla do wpisywania wartosci do tablicy
	{
	printf("podaj %d liczbe:\n",i+1);
	scanf("%d",&tablica[i]);	//pobranie wartosci do tablicy 
	if(i==0)test=tablica[i];		//przypisanie wartosci poczatkowej zmiennej test
	if(tablica[i]<test)test=tablica[i];	 //porownanie czy aktualna liczba jest mniejsza od "najmniejszej" liczby
	}
	
	printf("Odczytano liczby: ");
	for (int i = 0 ; i < n ; i++)	//p�tla s�u��ca do wypisania zawarto�ci tablicy
	{
	printf("%d ",tablica[i]);
	}
	printf("\nNajmniejsza liczba to: %d",test);	//odpowiedz do zadania :)
	
	return 0;
}
