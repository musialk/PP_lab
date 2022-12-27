#include <stdio.h>

int main(void)
{
	int i=2, j=1;
	float f;
	f=((float)j/(float)i); //rzutowanie jawne-poprzez instrukcje
	j=f;					//rzutowanie niejawne-przez kompilator
	return(0);
}
