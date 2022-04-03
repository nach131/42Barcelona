/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguillen <jguillen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 10:21:53 by jguillen          #+#    #+#             */
/*   Updated: 2022/04/02 16:10:47 by jguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  rush04.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 10:19:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/02 10:19:45 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  rush04.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itorrico <itorrico@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 10:10:29 by itorrico          #+#    #+#             */
/*   Updated: 2022/04/02 10:17:25 by itorrico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"

void	rush(int horizontal, int altura)
{
	int indiceH;
	int indiceA;

	indiceA = 1;
	while (indiceA <= altura && horizontal > 0)
	{
		indiceH = 1;
		while (indiceH <= horizontal)
		{
			if ((indiceH == 1 && indiceA == 1) || (indiceH == horizontal && indiceA == altura && indiceH != 1 && indiceA != 1))
				ft_putchar('A');
			else if ((indiceH == horizontal && indiceA == 1) || (indiceH == 1 && indiceA == altura))
				ft_putchar('C');
			else if ((indiceH == 1) || (indiceH == horizontal) || (indiceA == 1) || (indiceA == altura))
				ft_putchar('B');
			else
				ft_putchar(' ');
			indiceH++;
		}
		ft_putchar('\n');
		indiceA++;
	}
}


