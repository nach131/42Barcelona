#include<stdio.h>
void	ft_putnbr(int nb);

int	main(void)
{
	int	nb_1;
	int	nb_2;
	int nb_3;
	int nb_4;
	int nb_5;

	nb_1 = -2147483648;
	nb_2 = -5006;
	nb_3 = 0;
	nb_4 = 5;
	nb_5 = 2147483647;

	ft_putnbr(nb_1);
	printf("\n");
	ft_putnbr(nb_2);
	printf("\n");
	ft_putnbr(nb_3);
	printf("\n");
	ft_putnbr(nb_4);
	printf("\n");
	ft_putnbr(nb_5);
	printf("\n");
	return (0);
}
