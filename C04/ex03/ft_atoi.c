/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:09:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/18 15:41:33 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ascii 9 - 13 caracteres de control (tab horizontal...)

#include<stdio.h>

int	cambiar(int menos, int numero)
{
	if (numero != 0)
		if (menos % 2 == 1)
			if (numero != -2147483648)
				numero *= -1;
	return (numero);
}

int	ft_atoi(char *str)
{
	int	i;
	int	menos;
	int	numero;

	i = 0;
	menos = 0;
	numero = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			menos++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numero = numero * 10 + str[i] - '0';
		i++;
	}
	numero = cambiar(menos, numero);
	return (numero);
}
