/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:22:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 15:24:33 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://quantdare.com/numeros-de-fibonacci/
// https://www.youtube.com/watch?v=UMy9vD0wGxo

#include<stdio.h>

int ft_fibonacci(int index)
{
	int	i;

	i = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

int main(void)
{
	int resultado;
	resultado = ft_fibonacci(10);
	printf("resultado: %d\n", resultado);
}


