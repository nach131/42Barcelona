#include <stdio.h>
#include "secret.h"

int main() 

{

 char c;
 
c = -128 ;
aff_bin(c);
printf("<< \n");
aff_bin(c >>);
 
}

// de 10000000 --> 11000000