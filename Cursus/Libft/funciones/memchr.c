/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:40:37 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/24 14:19:42 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

//	void *memchr(const void *str, int c, size_t n)
//	busca la primera aparición del carácter c (un carácter sin signo)  en los 
//	primeros n bytes de la cadena a la que apunta, mediante el argumento str.
//	str - Este es el puntero al bloque de memoria donde se realiza la búsqueda.
//	c 	- Este es el valor que se pasa como un int, pero la función realiza 
//		una búsqueda byte por byte utilizando la conversión de caracteres
//		sin firmar de este valor (unsigned)
//	n	- Este es el número de bytes a analizar.

#include <stdio.h>
#include <string.h>

int main () {

	const char str[] = "";


	//	const char str[] = "42 Barcelona. Campus de programación más innovador";
   const char ch = '.';
   char *res;

   res = memchr(str, ch, strlen(str));

   printf("String despues '%c' es: '%s'\n", ch, res);
   printf("str original: %s\n", str);
   return(0);
}
// String despues '.' es: '. Campus de programación más innovador'
// str original: 42 Barcelona. Campus de programación más innovador
