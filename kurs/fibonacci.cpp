#include<stdio.h>

int Fib(int n)
{
	if(n<2)
		return n;
	else
		return Fib(n-2)+Fib(n-1);
}
