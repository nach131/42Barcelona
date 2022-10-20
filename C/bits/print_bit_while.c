/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bit_while.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:42:44 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/10/20 19:19:33 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <limits.h>

void printBits(size_t const size, void const *const ptr)
{
	unsigned char *b = (unsigned char *)ptr;
	unsigned char byte;
	int i, j;

	i = size - 1;
	while (i >= 0)
	{
		j = 7;
		while (j >= 0)
		{
			byte = (b[i] >> j) & 1;
			printf("%u", byte);
			j--;
		}
		i--;
	}

	puts(""); // output a line to a stream
}

int main(int argv, char *argc[])
{
	int i = 64;
	unsigned ui = UINT_MAX;
	float f = 23.45f;
	printBits(sizeof(i), &i);
	printBits(sizeof(ui), &ui);
	printBits(sizeof(f), &f);
	return 0;
}
