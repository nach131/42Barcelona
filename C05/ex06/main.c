#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	nb;

	printf("-------------------------------TEST 1---------------------------------\n");
	nb = 131;
	printf("nb = %d \n", nb);
	if (ft_is_prime(nb) == 0)
		printf("Test passed :D | %d is not a prime number", nb);
	else
		printf("Test failed :S | %d is not a prime number, should return 0", nb);
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 2---------------------------------\n");
	nb = 0;
	printf("nb = %d \n", nb);
	if (ft_is_prime(nb) == 0)
		printf("Test passed :D | %d is not a prime number", nb);
	else
		printf("Test failed :S | %d is not a prime number, should return 0", nb);
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 3---------------------------------\n");
	nb = 2;
	printf("nb = %d \n", nb);
	if (ft_is_prime(nb) == 1)
		printf("Test passed :D | %d is a prime number", nb);
	else
		printf("Test failed :S | %d is a prime number, should return 1", nb);
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 4---------------------------------\n");
	nb = 10000000;
	printf("nb = %d \n", nb);
	if (ft_is_prime(nb) == 0)
		printf("Test passed :D | %d is not a prime number", nb);
	else
		printf("Test failed :S | %d is not a prime number, should return 0", nb);
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 5---------------------------------\n");
	nb = 23;
	printf("nb = %d \n", nb);
	if (ft_is_prime(nb) == 1)
		printf("Test passed :D | %d is a prime number", nb);
	else
		printf("Test failed :S | %d is a prime number, should return 23", nb);
	printf("\n-----------------------------------------------------------------------\n");



	return (0);
}
