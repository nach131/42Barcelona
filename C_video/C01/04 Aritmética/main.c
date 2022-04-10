#include <stdio.h>

int main(void)
{
  int a;
  int *ptr;

  ptr = &a;
  printf("%p\n", ptr);
  printf("%p\n", ptr + 1); // + 1 bit, dependiendo de la valible a la que apunta el punterio.

  return (0);
}