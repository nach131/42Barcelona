/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   or_bit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:47:50 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/10/20 19:43:32 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>

int main(void)
{

	unsigned char a = 97;
	unsigned char S = 83;

	unsigned char res = (unsigned char)a | (unsigned char)S;

	printf("0110 0001 %c = %u\n", a, (unsigned char)a);
	printf("0100 0110 %c = %u\n", S, (unsigned char)S);
	printf("0110 0111 %c = %u\n", res, res);
	return (0);
}
