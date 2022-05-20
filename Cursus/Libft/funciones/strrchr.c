/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:02:08 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/20 12:08:14 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// char *strchr(const char *s, int c);
// busca la última aparición del carácter c (un carácter sin signo) 
// en la cadena a la que apunta, mediante el argumento str.i

#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str[] = "42 Barcelona. campus. de programación más innovador";
   const char ch = '.';
   char *res;

   res = strrchr(str, ch);
   printf("Despues del '%c' es: '%s'\n", ch, res);

   return(0);
}

// Despues del '.' es: '. de programación más innovador'
