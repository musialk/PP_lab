#include<stdio.h>
#include<conio.h>

znaki_lub_liczba z11={65};
int main(void)
{
	znaki_lub_liczba z12={65.56};
	
	printf("znak=%c", z11.znaki[0]);
	printf("znak=%c", z12.znaki[0]);
	
	getche();
	return 0;
}
