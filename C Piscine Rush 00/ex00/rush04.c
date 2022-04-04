/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguillen <jguillen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 10:21:53 by jguillen          #+#    #+#             */
/*   Updated: 2022/04/03 17:43:21 by nmota-bu         ###   ########.fr       */
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
void	ft_putchar(char c);

void	rush(int h, int v)
{
	int	i_h;
	int	i_v;

i_v = 1;
	while (i_v <= v && h > 0)
	{
i_h = 1;
		while (i_h <= h)
		{
			if ((i_h == 1 && i_v == 1)
				|| (i_h == h && i_v == v && i_h != 1 && i_v != 1))
				ft_putchar('A');
			else if ((i_h == h && i_v == 1)
				|| (i_h == 1 && i_v == v))
				ft_putchar('C');
			else if ((i_h == 1)
				|| (i_h == h) || (i_v == 1) || (i_v == v))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i_h++;
		}
		ft_putchar('\n');
		i_v++;
	}
}