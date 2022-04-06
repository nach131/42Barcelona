/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:33:27 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/06 14:52:40 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int 	De -2.147.483.648 a 2.147.483.647

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
		ft_putchar ('0' + nb % 10);
}
