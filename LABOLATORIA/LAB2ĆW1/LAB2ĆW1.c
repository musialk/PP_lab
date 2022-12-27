#include <stdio.h>

int main()
{
    int n=0;
    do{
        printf("podaj wartosc n>0");
        scanf("%i", &n);
    }while (n<=0);
    printf("wynik dzia³ania: ");

    int i=0;
    for (i=1;i<=n;i++)
    {
        if((i%2==0)&&(i%3==0))
            printf("%d", i);
    }
    return 0;
}
