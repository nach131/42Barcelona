
void	ft_rev_int_tab(int *tab, int size)
{
int numero;
int cambiar;

numero = 0;
size = size -1;
while( numero < size)
	{
	cambiar = tab[numero]; // primer valor de la array en numero 
	tab[numero] = tab[size]; // primer valor de la array se le asigna el size
	tab[size] = cambiar; // asignamos el valor a la array
	numero++;
	size--;
	}
}
