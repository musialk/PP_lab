#include <stdio.h>
if top>=N-1
"przepe³nienie (overflow)"
else
top=top+1
Stos[top]=item
int Stos[N];
int top=-1;

void push(int item)
{
	if(top>=N-1)
	{
		printf("\nStos przepe³niony (Stack Overflow)\n");
	}
	else
	{
		top=top+1;
		Stos[top]=item;
	}
}

if top=-1
"brak (underflow)"
else
stos[top]=NULL
top=top-1

int pop()
{
	int item=NULL;
	if(top==-1)
	{
		printf("\nStos pusty (Stack Underflow)\n");
	}
	else
	{
		item=Stos[top];
		Stos[top]=NULL;
		top=top-1;
	}
	return (item);
}

void main(){

{
	int item, operacja, petla=1, Push, Pop;
	while(petla==1)
	{
		printf("\n1.Operacja Push\n");
		printf("\n2.Operacja Pop\n");
		printf("\nWybierz operacje: ");
		scanf("%d", &operacja);
		switch(operacja)
		{
			case 1:
				printf("\nWprowadz wartosc odkladanej liczby; ");
				scanf("%d", &item);
				push(item);
				break;
			case 2:
				item=pop();
				if(item!=NULL)
				{
					printf("\nWartosc pobranej liczby wynosi: %d\n", item);
				}
				break;
			default:
				printf("\nWartosc wybor operacji - powtorz wybor: \n");
				break;
		}
		printf("\nNiepoprawny wybor operacji - powtorz wybor: \n");
		break;
	}
	printf("\nKontynuowac? (1-tak/0-nie): ");
	scanf("%d", &petla);
}
return 0;
}
