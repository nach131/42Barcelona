/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:46:28 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/30 22:11:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	menos;
	int	numero;

	i = 0;
	menos = 1;
	numero = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			menos = -1;
		//			menos++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numero = numero * 10 + str[i] - '0';
		i++;
	}
	return (menos * numero);
}
int	main(void)
{
	int 	numero;
//	char	string[20] = "+42 Barcelona";
	char	string[20] = "--123";

	numero = atoi(string);
	printf("\nnumero: %d\n", numero);
}
