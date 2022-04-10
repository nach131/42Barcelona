#include <stdio.h>

int main()
{
  // char str[] = "Hola que ases" // asi para definir una variable
  char *str;

  str = "Hola que ases";

  printf("%c %s\n", *str, str); // H Hola que ases
  return (0);
}