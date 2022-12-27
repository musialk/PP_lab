#include<stdio.h>
int macierz[4][5];
int j, i;
main()
{
	for(i=0;i<4;i++)
	
		for(j=0;j<5;j++)
			macierz[i][j]=i*j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			printf("%d", macierz[i][j]);
			printf("\n");
	}
	return 0;
}
