/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:11:35 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/07 12:28:55 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Asccii a=97 z=122 */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

c = 122;
	while (c >= 97)
	{
		write(1, &c, 1);
		c--;
	}
}
