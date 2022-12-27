#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
printf("Podaj iloœæ losowanych liczb: ");
scanf("%d",&n);
int tab[n];
int i, m=0;
for (i=0;i<n;i++)
{
 printf("Liczba: ");
 scanf("%d", &m);
 tab[n]=m;
}
int suma1=0, suma2=0, roz[n], x=n;
for (i=0;i<=n;i++)
{
 suma1+=tab[n];
} 
int roznica;
for (i=0;i<m;i++)
{
  if(suma2<suma1)
  suma2+=tab[i];

 {
  break;
 } 
 
}
roznica=suma1-suma2;
printf("%d", &n, &roznica);

return 0;
}
