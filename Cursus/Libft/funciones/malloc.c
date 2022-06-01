/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:04:07 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/01 16:09:46 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

//   void *calloc(size_t count, size_t size);
//   asigna la memoria solicitada y devuelve un puntero a ella.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(12);
   strcpy(str, "42 Barcelona");
   printf("String = %s,  Direccion puntero = %p\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 5);
   strcat(str, " la mejor de todas");
   printf("String = %s,  Direccion puntero = %p\n", str, str);

   free(str);

   return(0);
}
