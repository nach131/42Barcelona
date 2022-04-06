#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int res_div;
	int res_mod;
	int	*div;
	int	*mod;

	a = 8;
	b = 4;
	div = &res_div;
	mod = &res_mod;
	ft_div_mod(a, b, div, mod);
	printf("\n");
	printf("----------------TEST 1---------------\n");
	if (*div == 2 && *mod == 0)
		printf("Test passed: %d / %d || div = %d | mod = %d \n", a, b, res_div, res_mod);
	else
		printf("Test passed: %d / %d || div = %d | mod = %d \n", a, b, res_div, res_mod);
	printf("\n");
	
	a = 9;
	b = 2;
	div = &res_div;
	mod = &res_mod;
	ft_div_mod(a, b, div, mod);
	printf("\n");
	printf("----------------TEST 2---------------\n");
	if (*div == 4 && *mod == 1)
		printf("Test passed: %d / %d || div = %d | mod = %d \n", a, b, res_div, res_mod);
	else
		printf("Test passed: %d / %d || div = %d | mod = %d \n", a, b, res_div, res_mod);
	
	a = 8;
	b = 0;
	div = &res_div;
	mod = &res_mod;
	ft_div_mod(a, b, div, mod);
	printf("\n");
	printf("----------------TEST 3---------------\n");
	printf("Test passed! No return");	
	return (0);
}
