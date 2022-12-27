#include<stdio.h>

int main()
{
	int array[100], n, licznik, iter, pozycja, temp;
	
	printf("Podaj liczbe elementow do sortowania\n");
	scanf("%d", &n);
	printf("Wprowadz %d liczb calkowitych\n", n);
	
	for(licznik=0;licznik<n;licznik++);
		scanf("%d", &array[licznik]);
	for(licznik=0;licznik<(n-1);licznik++)
	{
		pozycja=licznik;
		for(iter=licznik+1;iter<n;iter++)
		{
			if(array[pozycja]>array[iter])
			pozycja=iter;
		}
		if(pozycja!=licznik)
		{
			temp=array[licznik];
			array[licznik]=array[pozycja];
			array[pozycja]=temp;
		}
	}
	printf("liczby posortowane rosnaco: \n");
	
	for(licznik=0;licznik<n;licznik++)
		printf("%d\n", array[licznik]);
	
	return 0;
}
