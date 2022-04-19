/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:31:52 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 14:35:15 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// power es numero con el que se tiene que elevar

#include<unistd.h>
#include<stdio.h>

int ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultado;

	i = 0;
	resultado = 1;
	if (power < 0) // elevado a 0 es ;-) 0
		return(0);
	if (nb == 0)
	{
		if (power == 0) 
			return (1);
		else 
			return (0);
	}
	while (i < power) 
	{
		resultado *= nb; // aqui la realiza el calculo
		i++;
	}
	return (resultado);
	printf("%d - %d\n", nb, power);
}

int	main(void)
{
	int nb = 10;
	int	power = 2;
	int resultado;

	resultado = ft_iterative_power(nb, power);
	printf("El resultado es: %d", resultado);
}
