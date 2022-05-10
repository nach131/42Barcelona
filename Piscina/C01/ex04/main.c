#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	i;
	int j;
	int *a;
	int *b;

	i = 17;
	j = 3;
	a = &i;
	b = &j;
	printf("\n");
	printf("----------------------TEST 1---------------------\n");
	printf("The div and mod of %d and %d are: \n", *a, *b);
	ft_ultimate_div_mod(a, b);
	if (*a == 5 && *b == 2)
	   	printf("Test passed! div = %d | mod = %d \n", *a, *b);	
	else
		printf("Test failed :( || div = %d | mod = %d \n", *a, *b);
	
	i = -5;
	j = 3;
	a = &i;
	b = &j;
	printf("\n");
	printf("----------------------TEST 2---------------------\n");
	printf("The div and mod of %d and %d are: \n", *a, *b);
	ft_ultimate_div_mod(a, b);
	if (*a == -1 && *b == -2)
	   	printf("Test passed! div = %d | mod = %d \n", *a, *b);	
	else
		printf("Test failed :( || div = %d | mod = %d \n", *a, *b);
	
	i = 17;
	j = 0;
	a = &i;
	b = &j;
	printf("\n");
	printf("----------------------TEST 1---------------------\n");
	printf("The div and mod of %d and %d are: \n", *a, *b);
	ft_ultimate_div_mod(a, b);
	if (*a == 17 && *b == 0)
	   	printf("Test passed! The original values are mantained \n");	
	else
		printf("Test failed :( || div = %d | mod = %d \n", *a, *b);
	
	return (0);
}
