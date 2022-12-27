#include<stdio.h>

void zero(int tab[])
{
	int i;
	for (i=0; i<5; i++)
		tab[i]=0;
}

int main(void)
{
	int tab[5]={1,2,3,4,5}, i;
	for (i=0; i<5; i++)
		printf("%3d", tab[i]);
	printf("\n");
	
	zero(tab);
	for(i=0; i<5; i++)
		printf("%3d", tab[i]);
	
	return 0;
}
