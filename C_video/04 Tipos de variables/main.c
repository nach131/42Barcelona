#include <stdio.h>
int main() 
{

// solo para char o int
// unsigned = 0 -> 255
// signed = -128 -> 127

// signed carh c;
// unsigned int i;

// long int ==> vale 8
// short
// char la varible mas pequeña contiene un octeto
char c;
c ='k';

// enteros
int i;

//===========================================================================================

// numeros con decimales de lag "Flotante" 4 octetos
float f;
f= 42.12;

// igual que float pero del doble de tamaño 8 octetos
double d;

//SABER EL VALOR DE UNA VARIABLE sizeof(variable)
printf("Tipos de variables:\n"); // devuelve 1 = un octeto = 127 bits, 107 el valor , k caracter
printf("char: %lu %d %c\n",sizeof(c),c,c); // devuelve 1 = un octeto = 127 bits, 107 el valor , k caracter
printf("int: %lu\n",sizeof(i)); //
printf("float: %lu %f\n",sizeof(f),f); //
}
