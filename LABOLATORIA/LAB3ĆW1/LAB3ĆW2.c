#include <stdio.h>

int main()
{
    int i,n,s,d,j,g=0;

    do
    {
        printf("wprowadz wartosc wieksza od 100: ");
        scanf("%d",&n);
    }while((n<100)||(n>1000));

    printf("Liczby,w ktorych nie zachodzi powtorzenie: ");

    for (i=100; i<=n; i++)
    {
        s=i/100;
        d=(i%100)/10;
        j=i%10;
        if((s!=d)&&(s!=j)&&(d!=j))
        {
            printf("%d,", i);
            g++;
        }
    }
    printf("Ilosc liczb to: %d", g);
return 0;
}
