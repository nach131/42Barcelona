/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:33:32 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/01 16:21:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *puntero;

	printf("Puntero address: a:%p:\n", puntero);
	//	puntero = (void *)malloc(count * size);
	puntero = malloc(count * size);
	if (!puntero)
		return (NULL);
	ft_bzero(puntero, count * size);
	return (puntero);
}

int main(void)
{
	size_t num;
	size_t size;
	int *a;

	num = 10;
	size = 5;

	a = ft_calloc(num, size);

	int i;
	i = 0;
	while (a[i] == 0)
	{
		printf("i:%d, ", a[i]);
		i++;
	}

	printf("\nPuntero address: a:%p:\n", a);
}
