/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:12:45 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/26 21:09:32 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// char *strstr(const char *haystack, const char *needle);
// La función encuentra la primera aparición de la subcadena needle en la 
// cadena haystack. Los caracteres finales '\0' no se comparan.

#include <stdio.h>
#include <string.h>


int main () {
   const char haystack[50] = "42Barcelona es la mejor";
   const char needle[10] = "mejor";
   char *ret;

   ret = strstr(haystack, needle);

   printf("La subcadena es: %s\n", ret);

   return(0);
}

// La subcadena es: mejor
