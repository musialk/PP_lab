#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	char tab[101];
	printf("podaj wartosc: ");
	fgets(tab, 100, stdin);
	printf("podaj przesuniencie: ");
	scanf("%d", &a);
	
	//while(a<1 || a>25)
	if(a<1 || a>25)
	{
		printf("blad\n");
		printf("Podaj przesuniecie: ");
		scanf("%d", &a);
	}
	
	for(int i=0; i<100; i++)
	{
	
		{
			if(tab[i]>=65 && tab[i]<=90-a);
		}
		
		{
			tab[i]=int(tab[i])+a;
		}
		if(tab[i]>=91-a && tab[i]<=90)
		{
			tab[i]=int(tab[i])-26+a;
		}
		else if(tab[i]>=97 && tab[i]<=122-a)
		{
			tab[i]=int(tab[i])+a;
		}
		else if(tab[i]>=123-a && tab[i]<=122)
		{
			tab[i]=int(tab[i])-26+a;
		}
	}
	printf("wiadomosc:\n ");
	printf(tab);
	return 0;
}
