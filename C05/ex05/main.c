#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	printf("-------------------------------TEST 1---------------------------------\n");
	nb = -1;
	printf("nb = %d \n", nb);
	if (ft_sqrt(nb) == 0)
		printf("Test passed :D | The argument is not valid, returned %d", ft_sqrt(nb));
	else
		printf("Test failed :S | Invalid argument, returned %d, should return 0", ft_sqrt(nb));
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 2---------------------------------\n");
	nb = 0;
	printf("nb = %d \n", nb);
	if (ft_sqrt(nb) == 0)
		printf("Test passed :D | √%d = %d", nb, ft_sqrt(nb));
	else
		printf("Test failed :S | √%d != %d", nb, ft_sqrt(nb));
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 3---------------------------------\n");
	nb = 64;
	printf("nb = %d \n", nb);
	if (ft_sqrt(nb) == 8)
		printf("Test passed :D | √%d = %d", nb, ft_sqrt(nb));
	else
		printf("Test failed :S | √%d != %d", nb, ft_sqrt(nb));
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 4---------------------------------\n");
	nb = 42;
	printf("nb = %d \n", nb);
	if (ft_sqrt(nb) == 0)
		printf("Test passed :D | √%d is irrational, returned %d", nb, ft_sqrt(nb));
	else
		printf("Test failed :S | √%d != %d", nb, ft_sqrt(nb));
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 5---------------------------------\n");
	nb = 2147395600;
	printf("nb = %d \n", nb);
	if (ft_sqrt(nb) == 46340)
		printf("Test passed :D | √%d = %d", nb, ft_sqrt(nb));
	else
		printf("Test failed :S | √%d != %d", nb, ft_sqrt(nb));
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 6---------------------------------\n");
	nb = 1;
	printf("nb = %d \n", nb);
	if (ft_sqrt(nb) == 1)
		printf("Test passed :D | √%d = %d", nb, ft_sqrt(nb));
	else
		printf("Test failed :S | √%d != %d", nb, ft_sqrt(nb));
	printf("\n-----------------------------------------------------------------------\n");


	return (0);
}
