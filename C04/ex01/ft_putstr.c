/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:49:03 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/17 21:49:03 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// while mientras str[indice] no se a null enviara a la funcion ft_putchar
// uno a uno cada caracter que componga el string *str 

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	indice;

	while (str[indice] != '\0')
	{
		ft_putchar(str[indice]);
	indice++;
	}
}
