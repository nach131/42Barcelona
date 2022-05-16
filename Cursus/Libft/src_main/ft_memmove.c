/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:16:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/16 15:42:47 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
//#include "libft.h"

 void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*ds;
	const char	*sr;

	i = 0;
	ds = dst;
	sr = src;
	while (i < len)
	{
		ds[i] = sr[i];
		i++;
	}
	printf("ft_memmove:\n dst: %s\n src: %s\n len: %zu\n", dst, src, len);
	return (0);
}

int	main(void)
{
	char 		dst[] = "Frase de destino.";
	const char 	src[] = "42 Barcelona es el campus de programación más innovador.";
	size_t		n;

	n = 7;

	ft_memmove(dst, src, n);
	printf("main:\n dst: %s\n src: %s\n len: %zu\n", dst, src, n);
}

// 
// ft_memmove:
//  dst: 42 Barce destino.
//  src: 42 Barcelona es el campus de programación más innovador.
//  len: 7
// main:
//  dst: 42 Barce destino.
//  src: 42 Barcelona es el campus de programación más innovador.
//  len: 7
