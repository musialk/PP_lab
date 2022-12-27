#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	bool warunek=true;
	while(warunek)
	{
		printf("petla wykonuje sie dopoki warunek jest true.\n");
		warunek=false;
	}
	printf("stop\n");
	return 0;
}
