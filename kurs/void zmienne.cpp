#include <stdio.h>
 
 void funkcja ()
 {
 	int a=10;
 	static int sa=10;
 	
 	a=a+5;
 	sa=sa+5;
 	
 	printf("a=%d,sa=%d\n", a, sa);
 }
 
 int main ()
 {
 	int i;
 	
 	for (i=0;i<5;++i)
 	funkcja ();
 	
 	return 0;
 }
