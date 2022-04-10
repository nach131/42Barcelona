#include <stdio.h>

int main() 

{
 //a es una tabla de enteros
 
  int a[10];

  a[0] =12;
  a[1] =1;
  a[9] =43;
  a[3]= a[0]*a[9];

  printf("esto un valor de una array: %d\n",a[3]);
  
}
