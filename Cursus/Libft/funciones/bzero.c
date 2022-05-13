/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:51:32 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/13 23:21:52 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

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
