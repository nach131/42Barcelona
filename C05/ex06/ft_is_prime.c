/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:21:27 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/20 15:47:21 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://parzibyte.me/blog/2019/07/12/numero-primo-c/

#include<stdio.h>

int ft_is_prime(int nb)
{
	long long i;
	long long num;

	i = 2;
	num = (long long)nb;
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

int main(void)
{
	int numero;
	int	resultado;
	
	numero = 131;
	resultado = ft_is_prime(numero);
	if (resultado == 1)
	printf("%d si es primo \n", numero);
	else
		printf("Ohh %d no es primo\n", numero);
}
