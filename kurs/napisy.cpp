#include <stdio.h>
char napis[80];
int i;
main()
{
	printf("wprowadz napis nie wiekszy niz 80 znakow: ");
	gets(napis);
	
	for(i=0; napis[i]; i++)
		printf("%c", napis[i]);
	return 0;
}
