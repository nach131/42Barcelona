/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:12:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/15 11:57:46 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

//	strlcpy(char *dst, const char *src, size_t size);
//	copia size char de una array de char a otra array 

// dst 	- Este el el puntero a la matriz de destino dende se copiaran los char's
// src 	- Es es el puntero a la funete de datos que se va a copia.
// size - Este es el número de bytes a copiar.

#include <stdio.h>
#include <string.h>

void test(int size)
{
    char src[] = "42 Barcelona";
    char dst[19];
    int r;

    r = strlcpy(dst,src,size);
	
	printf("Size: %d\n", size);
    printf("Copiar: '%s'\n en: '%s'\n logitud string copiado: %d\n",
            src,
            dst,
            r
          );\
	printf("-----------------\n");
}

int main()
{
    test(19);
    test(10);
    test(5);
    test(0);

    return(0);
}
