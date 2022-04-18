#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int nb);

int	ft_is_prime_verifier(int nb);

int	main(void)
{
	int	nb;
	int	next_prime;
	int	i;

	printf("Please input a number of type int to test your function: ");
	scanf("%d", &nb);
	next_prime = ft_find_next_prime(nb);
	printf("Next prime = %d\n", next_prime);
	
	i = nb;
	if (i == next_prime && ft_is_prime_verifier(i) == 1)
	{
		printf("Test passed :D | The next prime greater or equal than %d is %d\n", nb, next_prime);
		return (0);
	}
	while (i < next_prime)
	{
		if (ft_is_prime_verifier(i) == 1)
		{
			printf("Test failed :S | The next prime greater or equal than %d is not %d", nb, next_prime);
			return (0);
		}
		i++;
	}
	printf("Test passed :D | The next prime greater or equal than %d is %d\n", nb, next_prime);
	
	return (0);
}









































































































































































int	ft_is_prime_verifier(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	for (i = 1; i < nb / 2 + 5; i++)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}
