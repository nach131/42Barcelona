/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:08:56 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 22:02:08 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// ascii a=65 z=90 i
/*
 *
 *	if (str[indice] == 0)
 *	{
 *		return (1);
 *	}
 *	while (str[indice] != '\0')
 *	{
 *	ascii = (int)str[indice]; asigno el numero ascii a ascii ;-)
 *	SI ES 0-9 devuelve 0
 *		if ((ascii < 65 || ascii > 90))
 *		{
 *			return (0);
 *		}
 *	indice++;
 *	}
 *	return (1);
 */

int ft_str_is_uppercase(char *str)

{
	int indice;
	int ascii;

	indice = 0;
	if (str[indice] == 0)
	{
		return (1);
	}
	while (str[indice] != '\0')
	{
		ascii = (int)str[indice];
		if (ascii < 65 || ascii > 90)
		{
			return (0);
		}
		indice++;
	}
	return (1);
}
