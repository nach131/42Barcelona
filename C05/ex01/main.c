#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;

	printf("-------------------------------TEST 1---------------------------------\n");
	nb = -1;
	printf("nb = %d \n", nb);
	if (ft_recursive_factorial(nb) == 0)
		printf("Test passed :D | The argument is not valid, returned %d", ft_recursive_factorial(nb));
	else
		printf("Test failed :S | Invalid argument, returned %d, should return 0", ft_recursive_factorial(nb));
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 2---------------------------------\n");
	nb = 0;
	printf("nb = %d \n", nb);
	if (ft_recursive_factorial(nb) == 1)
		printf("Test passed :D | %d! = %d", nb, ft_recursive_factorial(nb));
	else
		printf("Test failed :S | %d! != %d", nb, ft_recursive_factorial(nb));
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 3---------------------------------\n");
	nb = 10;
	printf("nb = %d \n", nb);
	if (ft_recursive_factorial(nb) == 3628800)
		printf("Test passed :D | %d! = %d", nb, ft_recursive_factorial(nb));
	else
		printf("Test failed :S | %d! != %d", nb, ft_recursive_factorial(nb));
	printf("\n-----------------------------------------------------------------------\n");

	return (0);
}
