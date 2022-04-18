/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:19:39 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/18 18:21:55 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// recursiva ==> que la misma funcion se llame a ella misma hasta finalizar
// el while

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int resultado;
	
	resultado = 1;
	if (nb < 0) // menor de 0 es 0
		return (0);
	if (nb == 0 || nb == 1) si es 0 OR 1 return 1
		return (1);
	return (nb * ft_recursive_factorial(nb -1)); // revuelvo el resultado de la recursividad
	// hasta que nb llegue a 0
}


int main(void)
{
int resultado;

resultado = ft_recursive_factorial(5);

printf("resultado %d\n", resultado);
}
