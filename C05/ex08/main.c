#include<stdio.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	int	solutions;

	solutions = ft_ten_queens_puzzle();
	if (solutions == 724)
		printf("Test passed :D | The number of solutions for N = 10 is 724\n");
	else
		printf("Test failed :S | Returned: %d | Should return: 724\n", solutions); 
	return (0);
}
