/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:52:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/12 21:52:34 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ascii 32=espacio 126=~ IMPRIMIBLES

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexadecimal;

	hexadecimal = "0123456789abcdef";
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			ft_putchar(hexadecimal[*str / 16]);
			ft_putchar(hexadecimal[*str % 16]);
		}
		str++;
	}
}
