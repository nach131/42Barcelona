#include <stdio.h>
int a;
int main() 
{
  {
    // Si se vuele a declarar aqui la variable, es esta la que reconoce
    // por que se lee de arriba --> abajo
   a= 42;
   }
printf("Esto esta en la función,\nPero el valor esta en otro ambito y es: %d\n",a);
}
