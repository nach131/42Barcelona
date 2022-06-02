/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:40:37 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/24 20:20:38 by nmota-bu         ###   ########.fr       */
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

int test(size_t n)
{
   const char str[] = "42 Barcelona. Campus de programación más innovador";
   const char ch = '.';
   char *res;

   res = memchr(str, ch, n);
   printf("str original: %s\n char: '%c'\n n: %zu\n", str, ch, n);
   printf("String despues '%c' es: '%s'\n", ch, res);
   return (0);
}

int main()
{
   test(5);
   test(20);
   test(70);
   return (0);
}
// str original: 42 Barcelona. Campus de programación más innovador
//  char: '.'
//  n: 5
// String despues '.' es: '(null)'
// str original: 42 Barcelona. Campus de programación más innovador
//  char: '.'
//  n: 20
// String despues '.' es: '. Campus de programación más innovador'
// str original: 42 Barcelona. Campus de programación más innovador
//  char: '.'
//  n: 70
// String despues '.' es: '. Campus de programación más innovador'
