// tab es virtualmente un puntero sobre int
#include <stdio.h>

int main(void)
{
  int tab[3];
  int *tab2[2];

  tab[0] = 478;
  //===========================================================================================
  // tres formas defeinir una posicion de la array
  tab2[1][2] = 18;
  *(tab2[1] + 2) = 18;
  *(*(tab2 + 1) + 2) = 18;
  //===========================================================================================
  // printf("%p\n", *tab);
  // return (0);
}