/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 09:36:50 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 12:00:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// la función borra los datos en los n bytes de la memoria comenzando en la ubi-
// cación señalada por s, escribiendo ceros (bytes que contiene '\0') a esa área

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ch;
	size_t	i;

	ch = s;
	i = 0;
	while (i < n)
	{
		ch[i] = '\0';
		i++;
	}
}
// int	main(void)
// {
// 	char s[60] = "42 Barcelona es el campus de programación más innovador.";
// 	printf("Original: %s\n", s);
// 	ft_bzero(s, 5);
// 	printf("Despues: %s\n", s);
// }
// // Original: 42 Barcelona es el campus de programación más innovador.
// // Despues:
