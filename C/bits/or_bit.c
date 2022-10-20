/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   or_bit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:47:50 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/10/20 12:25:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>

int main(void)
{

	unsigned char a = 97;
	unsigned char U = 83;

	unsigned char res = (unsigned char)a | (unsigned char)U;

	printf("0110 1001  %c = %u\n", a, (unsigned char)a);
	printf("0101 0101  %c = %u\n", U, (unsigned char)U);
	printf("0111 0011  %c = %u\n", res, res);
	return (0);
}
