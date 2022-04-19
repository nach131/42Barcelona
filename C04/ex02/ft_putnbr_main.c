#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
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
		ft_putchar ('0' + nb % 10);
}



int main(void)
{
ft_putnbr(-2147483648);
ft_putnbr(3232);
ft_putnbr(-3232);
}

