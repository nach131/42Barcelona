/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:48:07 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 16:12:33 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	
	i = 0;
	if (nb < 0)
		return (0);
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}


int	main(void)
{
	int resultado;
	
	resultado = ft_sqrt(6440);

	printf("resultado: %d\n", resultado);
}
