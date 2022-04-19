/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:08:56 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 22:02:09 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// ascii 32-126 SI imprimibles
/*	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126) recorrera str SON IMPRIMIBLES
			str++;
		else
			return (0); SI NO IMPRIMIBLES devuelve 0
	}
	return (1); si no cumple el while devuelve siempre 1
*/
int ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			str++;
		else
			return (0);
	}
	return (1);
}
