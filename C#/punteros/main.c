#include<stdio.h>

// 
int intercambio(int x, int y)
{
	int	z;
	z = x;
	x = y;
	y = z;
}



int intercambio_puntero(int *x, int *y) // para recibir la direccion de un puntero *
{
	int z;
	z = *x; // el valor que hay dentro del puntero x se  asigna a z
	*x = *y; //  el valor que hay en el puntero y se asigna al valor que hay en l puntero x
	*y = z; // el valor de z se asigna al valor que hay en el puntero y
}


int	main(void)
{
int	a;
int	b;

a = 42;
b = 84;

	printf("a=%d b=%d\n",a ,b);
	intercambio(&a, &b);
	printf("a=%d b=%d\n",a ,b);
	intercambio_puntero(&a, &b); // para pasar la direccion de un puntero se utiliza &
	printf("a=%d b=%d\n",a ,b);
}
