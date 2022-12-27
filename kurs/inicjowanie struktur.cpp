#include<stdio.h>
#include<conio.h>
#include<string.h>

struck ts_osoba os3={"cabacki"}; //struktura  statyczna

int main(void)
{
	struct ts_osoba os=4{"dabacki"};
	printf("naz=%s im=%s pesel=%d", os3.nazwisko, os3.imie, os3.PESEL);
	printf("naz=%s im=%s pesel=%d", os4.nazwisko, os4.imie, os4.PESEL);
	getche(); 
	return 0;
}
