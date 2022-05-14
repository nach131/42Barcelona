/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:51:32 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/14 10:34:54 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// la función borra los datos en los n bytes de la memoria comenzando en la ubi-
// cación señalada por s, escribiendo ceros (bytes que contiene '\0') a esa área

#include <stdio.h>
#include <string.h>

int main () {
   char str[60];

   strcpy(str,"42 Barcelona es el campus de programación más innovador.");
   puts(str);

   memset(str,'@',12);
   puts(str);
   printf("antes de bzero: %s\n", str);
   bzero(str, sizeof(str));
   printf("size src: %d\n", sizeof(str));
   printf("bzero: %s\n", str);

   return(0);
}
// 42 Barcelona es el campus de programación más innovador.
// @@@@@@@@@@@@ es el campus de programación más innovador.
// antes de bzero: @@@@@@@@@@@@ es el campus de programación más innovador.
//size src: 60
// bzero:
