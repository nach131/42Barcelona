/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:10:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/06 10:17:52 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Ascii 0=48 9=57*/
#include <unistd.h>

void	ft_putchar(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	char	centenas;
	char	decenas;
	char	unidades;

	centenas = '0';
	while (centenas <= '7')
	{
		decenas = centenas +1;
		while (decenas <= '8')
		{
			unidades = decenas +1;
			while (unidades <= '9')
			{
				ft_putchar(centenas, decenas, unidades);
				if (centenas != '7' || decenas != '8' || unidades != '9')
				{
					write(1, ", ", 2);
				}
				unidades++;
			}
			decenas++;
		}
		centenas++;
	}
}
