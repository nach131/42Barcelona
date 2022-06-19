/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:33:32 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 22:32:36 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//    Asigna la memoria solicitada y devuelve un puntero a ella. La diferencia 
//    entre malloc y calloc es que malloc no establece la memoria en cero, 
//    mientras que calloc establece la memoria asignada en cero.
//	count	- This is the number of elements to be allocated.
//	size	- Este es el tamaño de los elementos.

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*puntero;

	puntero = malloc(count * size);
	if (!puntero)
		return (NULL);
	ft_bzero(puntero, count * size);
	return (puntero);
}
// int main(void)
// {
// 	size_t num;
// 	size_t size;
// 	int *a;
// 
// 	num = 10;
// 	size = 5;
// 
// 	a = ft_calloc(num, size);
// 
// 	int i;
// 	i = 0;
// 	while (a[i] == 0)
// 	{
// 		printf("i%d:%d, ", i, a[i]);
// 		i++;
// 	}
// 	printf("\nPuntero address: a:%p:\n", a);
// }
// // i0:0, i1:0, i2:0, i3:0, i4:0, i5:0, i6:0, i7:0, i8:0, i9:0, i10:0,
// i11:0, i12:0, i13:0, i14:0, i15:0, i16:0,
// // Puntero address: a:0x7fb9bbc02780:
