#include <stdio.h> //s�owa kluczowe

int main() //nazwy identyfikatory
{
	double promien, obwod, pole; //zmienne
	double pi = 3.1415; //sta�e
	
	printf("podaj promien: ");
	scanf("%lf", &promien);
	
	//wyliczam powierznie i obwod
	pole = promien * promien * pi; // operatory
	obwod = 2.0 * promien * pi;
	
	printf("pole powierzchni: %f\n", pole);
	printf("obwod: %f\n", obwod);
	
	return 0; //separatory
}
