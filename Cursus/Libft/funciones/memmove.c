/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:05:35 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/16 15:43:35 by nmota-bu         ###   ########.fr       */
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

#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "Esta es la frase destino";
   const char src[]  = "42 Barcelona es el campus de programación más innovador.";

   printf("ANTES de memmove.\n dest = %s\n src = %s\n", dest, src);
//   memmove(dest, src, 9);
   memmove(((void *)0), ((void *)0), 5);
   printf("DESPUES DE  memmove.\n dest = %s\n src = %s\n", dest, src);

   return(0);
}
// ANTES de memmove.
//  dest = Esta es la frase destino
//  src = 42 Barcelona es el campus de programación más innovador.
// DESPUES DE  memmove.
//  dest = 42 Barcela frase destino
//  src = 42 Barcelona es el campus de programación más innovador.
