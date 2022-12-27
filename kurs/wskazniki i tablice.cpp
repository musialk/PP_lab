#include<stdio.h>
int main()
{
	int a[5]={10,20,30};
	int *p, i;
	p=a;
	
	printf("%d %d %d %d %d \n", a[0], a[1], a[2], a[3], a[4]);
	printf("%d %d %d %d %d \n", *p, *(p+1), *(p+2), *(p+3), *(p+4));
	for (i=0;i<5;i++)
	{
		printf("x=%d \n", *p);
		p++;
	}
	return 0;
}
