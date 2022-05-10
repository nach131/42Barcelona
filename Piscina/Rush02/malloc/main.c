#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a;
	int x;

//	x = sizeof(int);
//	printf("%i", x); // saber el tamanyo de int en 4 bits en memoria

a = malloc(sizeof(int));
*a = 5;

printf("%i", *a);
	
char *b;

b  = (char*)malloc(sizeof(char));
*b= '@';

printf("%c", *b);


	return(0);
}
