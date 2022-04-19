/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:31:52 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 14:39:30 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// power es numero con el que se tiene que elevar

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultado;

	i = 0;
	resultado = 1;
	if (power < 0)
		return (0);
	if (nb == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	while (i < power)
	{
		resultado *= nb;
		i++;
	}
	return (resultado);
}
