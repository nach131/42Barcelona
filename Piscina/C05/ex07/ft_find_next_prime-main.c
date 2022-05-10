/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:37:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 20:37:20 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{

	while(nb <= 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			return ((int)nb);
		nb++;
	}
	return (0);
}

int	main(void)
{
	int resultado;

	resultado = ft_find_next_prime(128);
		printf("next prime to 128 es: %d\n", resultado);
}
