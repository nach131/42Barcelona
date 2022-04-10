#include <stdio.h>

int main(void)
{
  int a;
  int *ptr;
  a = 42;

  ptr = &a;
  printf("%d\n", a);    // mostrar el valor de a
  printf("%d\n", *ptr); // muestra el valor que almacena el ptr
  return (0);
}