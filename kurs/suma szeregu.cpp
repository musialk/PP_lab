#include <stdio.h>

int main()
{
	int n, i, suma=0;
	
	printf("Podaj liczbe naturalna niezerowa: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		suma+=i;
	}
	printf("Suma=%d", suma);
	return 0;
}
