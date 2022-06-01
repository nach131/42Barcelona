/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 08:26:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/01 16:13:11 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

//    void *calloc(size_t count, size_t size)
//    Asigna la memoria solicitada y devuelve un puntero a ella. La diferencia 
//    entre malloc y calloc es que malloc no establece la memoria en cero, 
//    mientras que calloc establece la memoria asignada en cero.
//	count	- This is the number of elements to be allocated.
//	size	- Este es el tamaño de los elementos.

#include <stdio.h>
#include <stdlib.h>

int main () {
   int i, n;
   int *a;

   printf("Número de elementos a introducir: ");
   scanf("%d",&n);

   a = (int*)calloc(n, sizeof(int));
   printf("Introducir %d numeros:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("Los números ingresados son: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d, ",a[i]);
   }
   printf("\n-------(o Y o)----------\n");
   free( a );

   return(0);
}
