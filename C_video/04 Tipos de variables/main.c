#include <stdio.h>
int main() 
{

// char la varible mas pequeña contiene un octeto
char c;
c ='k';
//SABER EL VALOR DE UNA VARIABLE sizeof(variable)
printf("%lu %d %c\n",sizeof(c),c,c); // devuelve 1 = un octeto = 127 bits, 107 el valor , k caracter

}

// %lu = 1
