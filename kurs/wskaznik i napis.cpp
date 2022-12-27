#include <stdio.h>
char lan[]="tekst";
char bufor[20];
unsigned h=0;
char *src=&lan[0];
char *dst=&bufor[0];
h=strlen(src);
int i;
int main()
{

for (i=0; i<=h; i++)
{
	bufor[i]=lan[i];
	printf (bufor);
}
return 0;
}
