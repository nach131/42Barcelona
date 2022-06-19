/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:35:37 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 22:29:51 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//  void *memcpy(void *dest, const void *src, size_t n)
//  copia n caracteres del área de memoria src al área de memoria dest.
//  retornar NULL en el caso de que los dos argumentos se han NULL

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*de;
	char	*sr;
	size_t	i;

	de = (char *)dest;
	sr = (char *)src;
	i = 0;
	if (sr || de)
	{
		while (i < n)
		{
			de[i] = sr[i];
			i++;
		}
		return (de);
	}
	return (NULL);
}
// int	main(void)
// {
// 	size_t	n;
// 	char 	src[] = "42 Barcelona es el campus de programación más innovador.";
// 	char 	dest[] = "Esto es destino";
// 
// 	n = 7;
// 	printf("Inicial: %s\n",dest);
// 	ft_memcpy(dest, src, n);
//	ft_memcpy(((void *)0), ((void *)0), 3); // comprobacion del null parametro
// 	printf("Despues ft_memcpy: %s\n",dest);
// }
// // Inicial: Esto es destino
// // Despues ft_memcpy: 42 Barc destino
