/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:47:21 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/01 18:20:28 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

//  char *strdup(const char *s1)
//  función asigna memoria suficiente para una copia del string s1,
//   hace la copia y le devuelve un puntero.
//   el puntero posteriormente puede usarse como argumento de la función free(3).
//   para liberar la mememoria.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str[] = "42 Barcelona";
	char *res = strdup(str);
	
	printf("str: %s, puntero: %p\n", str, str);
	printf("res: %s, puntero: %p\n", res, res);
	printf("----Libereando el puntero res----\n");
	free(res);
	printf("res: %s, puntero: %p\n", res, res);
}
//str: 42 Barcelona, puntero: 0x7ffee75eb8cb
//res: 42 Barcelona, puntero: 0x7fcc7b4002e0
//----Libereando el puntero res----
//res: 42 Barcelona, puntero: 0x7fcc7b4002e0
