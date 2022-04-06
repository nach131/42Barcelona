#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			write(1, "147483648", 9);
		}
		else
		{
			ft_putchar('-');
			nb = -nb;
		}
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	if (nb != -2147483648)
		ft_putchar(nb % 10 + '0');≈
