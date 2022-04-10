#include <stdio.h>

int main(void)
{
  int a;
  int *ptr;   // declaracion de un puntero sombre un int
  int **ptr2; // tiene la direccion de un puntero

  ptr = &a; // repuereacion de la variable a
  // hace una copia de a y la mete en ptr
  printf("%p\n", ptr);
  ptr2 = &ptr;
  printf("%p\n", ptr2);
  return (0);
}
