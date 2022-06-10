/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

static size_t count_nb_digit(long long_nbr, int sign)
{
	size_t nb_digit;

	if (long_nbr == 0)
		return (1);
	nb_digit = 0;
	while (long_nbr > 0)
	{
		long_nbr /= 10;
		nb_digit++;
	}
	if (sign == -1)
		nb_digit++;
	return (nb_digit);
}

static void nb_to_str(char *result, long long_nbr, unsigned int nb_digit,
											int sign)
{

	printf("long_nbr: %ld\n", long_nbr);
	printf("nb_digit: %d\n", nb_digit);
	if (long_nbr == 0)
	{
		result[0] = '0';
		result[1] = '\0';
		return;
	}
	result[nb_digit] = '\0';
	while (long_nbr > 0)
	{
		result[--nb_digit] = long_nbr % 10 + '0';
		long_nbr /= 10;
	}
	if (sign == -1)
		result[0] = '-';
}

char *ft_itoa(int n)
{
	char *result;
	long long_nbr;
	size_t nb_digit;
	int sign;

	sign = 1;
	if (n < 0)
	{
		long_nbr = (long)n * -1;
		sign = -1;
	}
	else
		long_nbr = n;
	nb_digit = count_nb_digit(long_nbr, sign);
	result = malloc(sizeof(char) * (nb_digit + 1));
	if (!result)
		return (NULL);
	nb_to_str(result, long_nbr, nb_digit, sign);
	return (result);
}
int main(void)
{
	// printf("%s\n", ft_itoa(0));
	// printf("%s\n", ft_itoa(INT_MAX));
	// 	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(42));
	// printf("%s\n", ft_itoa(-42));
	// printf("%s\n", ft_itoa(987654321));
	// printf("%s\n", ft_itoa(-123456789));
	return (0);
}
