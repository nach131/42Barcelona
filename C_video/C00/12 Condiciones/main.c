#include <stdio.h>

int main(void)
{
int a;

a = 42;

if(a > 54)
{
printf("Hey si se cumple\n");
}
else if (a == 40) {
printf("Si no se cumple\n");
} 
else 
{
printf("valor por defecto si no se cumple los if");
}
}