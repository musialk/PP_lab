#include <stdio.h>

int y=21;
static int x;

 int main ()
 {
 	printf ("x=%d\n", x);
	printf ("y=%d\n", y);
	
	int x;
	auto int y=5;
	
	printf ("x=%d\n", x);
	printf ("y=%d\n", y);
	 
 	if (x>0)
 	{
 		float y=10.0;
 		printf("y=%f\n", y);
	 }
	 return 0;
 }
