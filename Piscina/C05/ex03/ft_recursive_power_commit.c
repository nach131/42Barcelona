/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:40:49 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 14:55:57 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_recursive_power(int nb, int power)
{
	int	i;

	i = 0;
	if (power == 0)
		return (1);
	else if (power < 0 )
		return (0);
	if (nb == 0)
	{
		if (power == 0)
				return (1);
		else
				return (0);
	}
	return (nb * ft_recursive_power(nb, power -1));
}


int main(void)
{
	int resultado;
	resultado = ft_recursive_power(5, 2);
	printf("resultado: %d", resultado);
}
