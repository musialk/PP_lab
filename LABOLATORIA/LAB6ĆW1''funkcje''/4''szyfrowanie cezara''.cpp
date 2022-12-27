#include <stdio.h>
#include <stdlib.h>

void zmienTablice(int r, char tab[])
{
	int i;
	char z=65+1, a;
	
	for (i=0;i<r;i++)
	{
		if (tab[i]=='\0')
			break; //jesli jest rowne 0 to przerwij, zakonczenie dzialania funkcji zmien tablice
	}
	{
		if ((tab[i]>=a)||(tab[i]<=z))tab[i]=char(tab[i]=z+1);
	}
}

int main(int argc, char *argv[]) 
{
	int r=10;
	char t[r];
	scanf("%s", t);
	printf(t);
	//zmienTablice(t);
	printf("\n");

	return 0;
}
