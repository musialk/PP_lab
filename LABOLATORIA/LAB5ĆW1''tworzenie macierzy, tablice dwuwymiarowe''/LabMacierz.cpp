#include <iostream>

int main()
{
	int k,w; // k dlugosc wiersza, w ilosc wierszy w macierzy
	printf("podaj dlugosc wiersza:\n");	
	scanf("%d",&k);	
	printf("podaj ilosc wierszy:\n");	
	scanf("%d",&w);		
	
	//deklarowanie tabeli
	int macierz[w][k];
	int wyniki[w]; //macierz przechowujaca wartosci srednie z wiersza
	
	for( int i = 0 ; i < w ; i++)	//petla po wierszach
	{
		wyniki[i]=0;	//inicjowanie tabeli
		for( int j = 0 ; j < k ; j++) 	//petla po kolumnach
		{
			printf("Podaj wartosc dla macierzy w wierszu:%d kolumnie:%d: ",i,j);
			scanf("%d",&macierz[i][j]);  //wpisanie wartosci w pole w wierszu i-tym kolumnie j-tej
			wyniki[i]=wyniki[i]+macierz[i][j]; //sumowanie kolejnych wpisanych liczb do wiersza (wiersz jest staly, kolumny sie inkrementuja)
		}
		wyniki[i]=wyniki[i]/k; //wyliczamy wartosc srednia dzielac przez ilosc kolumn
	}
	
	printf("\nOdczytalam macierz:\n");
	for (int i = 0 ; i < w ; i++)	//pêtla s³u¿¹ca do wypisania zawartoœci tablicy po wierszach(inkrementacja)
	{	
		for (int j = 0 ; j < k ; j++)	//po kolumnach(inkrementacja)
		{
			printf("%d ",macierz[i][j]);
		}
		printf(" wart.srednia:%d\n",wyniki[i]);
	}
	
	
	return 0;
}
