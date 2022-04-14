/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:51:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/13 15:35:39 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// char es una variable con signo, que tiene un rango de [-128,127].
// unsigned char es una variable sin signo, que tiene un rango de [0,255]

//  strcmp — Comparación de string segura a nivel binario
//  Tenga en cuenta que esta comparación considera mayúsculas y minúsculas.
//  mientras (caracter s1 "Y" Caracter s2) "Y" (caracter s1 "IGUAL" Caracter s2) 
//  while ((s1[indice] && s2[indice]) && (s1[indice] == s2[indice]))
//  se devuelve 


int	ft_strcmp(char *s1, char *s2)
{
	int indice;
	int toma;

	toma = 42;
	while ((s1[indice] && s2[indice]) && (s1[indice] == s2[indice]))
	{
		indice++;
	}
	return ((unsigned char)s1[indice] - (unsigned char)s2[indice]);
}
