#include<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	n;
	int m;
	int *a = &n;
	int *b = &m;

	*a = 5;
	*b = 7;
	printf("\n");
	printf("----------TEST 1-----------\n");
	printf("Original: a = %d, b = %d \n", *a, *b);
	ft_swap(a, b);
	printf("Swapped: a = %d, b = %d \n", *a, *b);
	
	*a = -210347;
	*b = 0;
	printf("\n");
	printf("----------TEST 2-----------\n");
	printf("Original: a = %d, b = %d \n", *a, *b);
	ft_swap(a, b);
	printf("Swapped: a = %d, b = %d \n", *a, *b);

	*a = 586985693;
	*b = 0;
	printf("\n");
	printf("----------TEST 3-----------\n");
	printf("Original: a = %d, b = %d \n", *a, *b);
	ft_swap(a, b);
	printf("Swapped: a = %d, b = %d \n", *a, *b);
	return (0);
}
