#include <stdio.h>
#include <stdlib.h>

void doskonala(int n)
{ int suma;
	 for(int i=1; i<n; i++)
        {
            if(n%i==0)
            {
			suma+=i;}
        }
        if(suma==n)
            printf("%d", n);
        else
        printf("%d xD", n);
}

int main()
{
    int suma=0;
	int n, i;

    printf("wprowadz wartosc ");
    scanf("%d", &n);

    
return 0;
}
