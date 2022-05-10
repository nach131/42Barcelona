#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	n;
	int *nbr;

	n = 0;
	nbr = &n;
	ft_ft(nbr);
	if (n == 42)
		printf("Test passed! n = %d \n", n);
	else
		printf("Test not passed :( n = %d \n", n);
	return (0);
}
