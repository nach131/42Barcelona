#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	printf("-------------------------------TEST 1---------------------------------\n");
	nb = -1;
	power = -1;
	printf("nb = %d | power = %d \n", nb, power);
	if (ft_recursive_power(nb, power) == 0)
		printf("Test passed :D | The argument is not valid, returned %d", ft_recursive_power(nb, power));
	else
		printf("Test failed :S | Invalid argument, returned %d, should return 0", ft_recursive_power(nb, power));
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 2---------------------------------\n");
	nb = 0;
	power = 0;
	printf("nb = %d | power = %d \n", nb, power);
	if (ft_recursive_power(nb, power) == 1)
		printf("Test passed :D | %d^%d = %d", nb, power, ft_recursive_power(nb, power));
	else
		printf("Test failed :S | %d^%d != %d", nb, power, ft_recursive_power(nb, power));
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 3---------------------------------\n");
	nb = 10;
	power = 2;
	printf("nb = %d | power = %d \n", nb, power);
	if (ft_recursive_power(nb, power) == 100)
		printf("Test passed :D | %d^%d = %d", nb, power, ft_recursive_power(nb, power));
	else
		printf("Test failed :S | %d^%d != %d", nb, power, ft_recursive_power(nb, power));
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 4---------------------------------\n");
	nb = 10;
	power = 0;
	printf("nb = %d | power = %d \n", nb, power);
	if (ft_recursive_power(nb, power) == 1)
		printf("Test passed :D | %d^%d = %d", nb, power, ft_recursive_power(nb, power));
	else
		printf("Test failed :S | %d^%d != %d", nb, power, ft_recursive_power(nb, power));
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 5---------------------------------\n");
	nb = -10;
	power = 3;
	printf("nb = %d | power = %d \n", nb, power);
	if (ft_recursive_power(nb, power) == -1000)
		printf("Test passed :D | %d^%d = %d", nb, power, ft_recursive_power(nb, power));
	else
		printf("Test failed :S | %d^%d != %d", nb, power, ft_recursive_power(nb, power));
	printf("\n-----------------------------------------------------------------------\n");



	return (0);
}
