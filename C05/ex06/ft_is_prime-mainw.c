/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:21:27 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 16:29:01 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://parzibyte.me/blog/2019/07/12/numero-primo-c/

#include<stdio.h>

int	ft_is_prime(int nb)
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
	return(1);
}

int main(void)
{
	int	resultado;
	
	resultado = ft_is_prime(131);
	printf("resultado %d\n", resultado);
}
