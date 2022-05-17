/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:57:39 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/17 22:13:37 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// size_t  strlcpy(char *dst, const char *src, size_t size)
// Concatena dos string el dst tiene que tener capacidad para los datos a copiar

#include<string.h>
#include<stdio.h>

int	main(void)
{
	char	src[] = "Barcelona";
	char	dst[15]	= "42 ";
	size_t	r;

	r = strlcat(dst, src, 13);

	printf(" r: %zu\n src: %s\n dst: %s\n", r, src, dst);
}
// r: 12
// src: Barcelona
// dst: 42 Barcelona
