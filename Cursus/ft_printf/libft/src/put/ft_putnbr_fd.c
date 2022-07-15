/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 23:17:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/19 11:16:43 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// Escribe el número ’n’ al file descriptor dado.
//	#1. El número ’n’ a escribir.
//	#2. El file descriptor en el que escribir.

#include"libft.h"

void	ft_putchar(int fd_p, char c)
{
	write(fd_p, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
			write (fd, "-2147483648", 11);
		else
		{
			ft_putchar(fd, '-');
			n = -n;
		}	
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	if (n != -2147483648)
		ft_putchar (fd, ('0' + n % 10));
}
//int	main(void)
//{
//	ft_putnbr_fd(-2147483648, 1);
//	ft_putnbr_fd(2147483647, 1);
//}
