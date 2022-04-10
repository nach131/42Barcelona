#include <stdio.h>

int main() 

{
 //a es una tabla de enteros
  int a[10][10]; // 100 int

  a[0][4]=12;
  a[1][0] =1;
  a[9][4] =43;
  a[3][4]= a[0][4]*a[9][4];

  printf("esto un valor de una array: %d\n",a[3][4]);
  
}
