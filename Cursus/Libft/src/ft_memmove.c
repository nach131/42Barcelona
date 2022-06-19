/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:16:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 22:31:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// void *memmove(void *dest, const void *src, size_t n)
// vcopia n caracteres de str2 a str1, pero para bloques de memoria 
// superpuestos, memmove() es un enfoque más seguro que memcpy().

// dest - Este es un puntero a la matriz de destino donde se copiará el conte-
// 		nido, convertido a un puntero de tipo void*.
// src - Este es un puntero a la fuente de datos que se va a copiar, conver-
// 		tido a un puntero de tipo void*.
// n   - Este es el número de bytes a copiar.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*ds;
	const char	*sr;

	i = len;
	ds = (char *)dst;
	sr = (char *)src;
	if (dst != NULL || src != NULL)
	{
		if (src > dst)
		{
			ft_memcpy(dst, src, len);
		}
		else
		{
			while (i)
			{
				ds[i -1] = sr[i -1];
				i--;
			}
		}
		return (ds);
	}
	return (NULL);
}
// int	main(void)
// {
// 	char 		dst[] = "Frase de destino.";
//	const char 	src[] = "42 Barcelona es el campus de programación más.";
// 	size_t		n;
// 
// 	n = 7;
// 	ft_memmove(dst, src, n);
// 	printf("main:\n dst: %s\n src: %s\n len: %zu\n", dst, src, n);
// }
// // main:
// //  dst: 42 Barce destino.
// //  src: 42 Barcelona es el campus de programación más innovador.
// //  len: 7
