/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:20:06 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/06 10:49:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 	ft_putchar('0' + par_a / 10); 1 ASCii 
//	ft_putchar('0' + par_a % 10); / ASCii o uno menos que el anterior 
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i)
{
	ft_putchar('0' + i / 10);
	ft_putchar('0' + i % 10);
}	

void	ft_print_comb2(void)
{
	int	par_a;
	int	par_b;

	par_a = -1;
	while (par_a++ < 98)
	{
		par_b = par_a;
		while (par_b++ < 99)
		{
			ft_print(par_a);
			ft_putchar(' ');
			ft_print(par_b);
			if (par_a != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
