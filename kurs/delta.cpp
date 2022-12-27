#include <stdio.h>
#include <math.h>
int rkw(float a, float b, float c, float *x1, float *x2)
{
	float delta;
	delta=b*b-4*a*c;
	if(delta<0)
		return 0;
	if(delta==0)
	{
		*x1=*x2=-b/(2*a);
		return 1;
	}
	if (delta>0)
	{
		*x1=(-b-sqrt(delta))/(2*a);
		*x2=(-b+sqrt(delta))/(2*a);
		return 2;
	}
}

int main(void)
{
	float pa, pb, pc, x1, x2;
	
	printf("Podaj par. a: ");
	scanf("%f", &pa);
	printf("Podaj par. b: ");
	scanf("%f", &pb);
	printf("Podaj par. c: ");
	scanf("%f", &pc);
	
	switch(rkw(pa,pb,pc,&x1,&x2))
	{
		case 0: printf("Brak pierwiastkow\n"); break;
		case 1: printf("x1=x2=%f\n", x1); break;
		case 2: printf("x1=%f\n", x1);
				printf("x2=%f\n", x2);
	}
	return 0;
}
