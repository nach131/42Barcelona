/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:35:37 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/16 15:08:23 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//  void *memcpy(void *dest, const void *src, size_t n)
//  copia n caracteres del área de memoria src al área de memoria dest.

#include <stdio.h>
//#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*de;
	char	*sr;
	size_t	i;
	
	de = (char *)dest;
	sr = (char *)src;
	i = 0;
	if (sr != NULL)
	{
		while (i < n)
		{
			de[i] = sr[i];	
  			i++;
  		}
		return(de);
	}
	printf("A copiar: %s\nsize_t: %zu\n", src, n);
//	printf("destino: %s\n", dest);
//	return (de);
	return (NULL);
}

int	main(void)
{
	size_t	n;
	char 	src[60] = "42 Barcelona es el campus de programación más innovador.";
	char 	dest[60] = "Esto es destino";

	n = 7;
	printf("dest inicial: %s\n",dest);
//	ft_memcpy(dest, src, n);
	ft_memcpy(((void *)0), ((void *)0), 3);
	printf("dest despues ft_memcpy: %s\n",dest);
}
