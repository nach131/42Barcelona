/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:17:27 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 22:02:10 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// ascii 97=a 122=z
// -32 es la diferencia detre a y A
// while se cumple mientras encuentre minisculas

char *ft_strupcase(char *str)
{
	int indice;
	int ascii;

	indice = 0;
	while (str[indice] != '\0')
	{
		ascii = (int)str[indice];
		if (ascii >= 97 && ascii <= 122)
		{
			str[indice] -= 32;
		}
		indice++;
	}
	return (str);
}
