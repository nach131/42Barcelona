/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:43:35 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/14 15:53:15 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//  void *memcpy(void *dest, const void *src, size_t n)
//  copia n caracteres del área de memoria src al área de memoria dest.
//
// 	dest - Este es un puntero a la matriz de destino donde se copiará el 
//		contenido, convertido a un puntero de tipo void*.
//	src - Este es un puntero a la fuente de datos que se va a copiar, 
//		convertido a un puntero de tipo void*.
//	n	- Este es el número de bytes a copiar.

#include <stdio.h>
#include <string.h>

int main () {
   const char src[60] = "42 Barcelona es el campus de programación más innovador.";
   char dest[60]= "Hola que Ases!!!";
//   strcpy(dest,"Hola que Ases!!!");
   printf("Antes memcpy dest: %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("Despues memcpy dest: %s\n", dest);

   return(0);
}

// Antes memcpy dest: Hola que Ases!!!
// Despues memcpy dest: 42 Barcelona es el campus de programación más innovador.
