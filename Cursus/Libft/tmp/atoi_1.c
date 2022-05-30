/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:30:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/30 23:38:04 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cambiar(int menos, int numero)
{
	if (numero != 0)
		if (menos % 2 == 1)
			if (numero != -2147483648)
				numero *= -1;
	return (numero);
}

int ft_atoi(char *str)
{
	int i;
	int menos;
	int numero;

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

int	main(void)
{
	int		res;
	int 	ori;
	char	str[20];	

	strcpy(str, "--+124");
	res = ft_atoi(str);
	ori = atoi(str);

	printf("atoi: %d\n", res);
	printf("original: %d\n", ori);
}
