/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:22:54 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/19 22:31:26 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

//	char *strchr(const char *str, int c)
//  busca la primera aparición del carácter c (un carácter sin signo) en la
//  cadena a la que apunta el argumento str.

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "42 Barcelona. campus de programación más innovador y ...";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("Despues del '%c' es: '%s'\n", ch, ret);
   
   return(0);
}

// Despues del '.' es: '. campus de programación más innovador y ...'
