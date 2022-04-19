/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 22:01:39 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 22:01:44 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

void ft_sort_int_tab(int *tab, int size)
{
	int lap1;
	int lap2;
	int numero;

	lap1 = 0;
	while (lap1 < size)
	{
		lap2 = 0;
		while (lap2 < size)
		{
			if (tab[lap1] < tab[lap2])
			{
				numero = tab[lap1];
				tab[lap1] = tab[lap2];
				tab[lap2] = numero;
			}
			lap2++;
		}
		lap1++;
	}
}
