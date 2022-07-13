# printf

## Synopsis

	int printf(const char *format, ...);

La forma más fácil de mirar la cadena de formato es que imprimirá todo en la cadena tal como está, a menos que un carácter tenga un signo de porcentaje **(%)** delante de él.

Ahí es cuando ocurre la magia: el siguiente argumento en la lista de argumentos de printf() se imprime de la manera descrita por el código de porcentaje. Estos códigos de porcentaje se denominan especificadores de formato.

	#include<stdio.h>

	int main(void){
	int ancho = 12;
	int valor = 42;
	float pi =  3.1415926535;
	char *s = "42 Barcelona is the Best";
	char ch = 'Z';

	printf("%07d\n", valor);		/*0000042*/
	printf("%s\n", s);			/*42 Barcelona is the Best*/
	printf("%c\n", ch);			/*Z*/
	printf("%.2f\n", pi);			/*3.14*/
	printf("42%%\n");			/*42%*/

	printf("%*d\n", ancho, valor);   	/*          42*/
	printf("%-8dBarcelona\n", valor); 	/*42      Barcelona*/
	printf("%7.3f\n", pi);          	/*  3.142*/

	printf("%hhd\n", ch);           	/*90 <-- ASCII code de Z */
}
