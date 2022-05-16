/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:28:44 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/16 12:53:25 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// void *memset(void *str, int c, size_t n)
//
// str 	− Este es un puntero al bloque de memoria a llenar.
// c 	− Este es el valor a configurar. El valor se pasa como un int, 
// 		pero la función llena el bloque de memoria utilizando la conversión 
// 		de caracteres sin firmar de este valor.
// n 	− Este es el número de bytes que se establecerá en el valor.

#include <stdio.h>
#include <string.h>

int main () {
   char str[60];

   strcpy(str,"42 Barcelona es el campus de programación más innovador.");
   puts(str);

  // char tomate[60];
	int tomate;

   tomate =  memset(str,'@',12);
   puts(str);
   
	printf("%d", tomate);

   return(0);
}

// 42 Barcelona es el campus de programación más innovador.
// @@@@@@@@@@@@ es el campus de programación más innovador.
