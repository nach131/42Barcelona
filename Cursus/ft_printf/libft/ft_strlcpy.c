/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:13:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 22:29:21 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//	copia size char de una array de char a otra array 
// dst 	- Este el el puntero a la matriz de destino dende se copiaran los char's
// src 	- Es es el puntero original de datos que se va a copia.
// size - Este es el número de bytes a copiar.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
// int	main(void)
// {
// //	char	src[] = {'\0', '\0'};
// 	char	src[] = "42 Barcelona";
// 	char	dst[20];
// 	size_t	n;
// 
// 	n = 5;
// 	ft_strlcpy(dst, src, n);
// 	printf("src: '%s'\n dst: '%s'\n lenght src: %lu\n", src, dst, sizeof(src));
// return (0);
// }
// // main:
// //  src: '42 Barcelona'
// //  dst: '42 B'
// //  lenght src: 13
