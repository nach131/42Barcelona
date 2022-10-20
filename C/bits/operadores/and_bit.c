/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   and_bit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:47:50 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/10/20 12:57:00 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */


  #include <stdio.h>

int	main(void)
{

	unsigned char a = 97;
	unsigned char F = 70;

	unsigned char res = (unsigned char)a & (unsigned char)F;

	printf("0110 0001  %c = %u\n", a, (unsigned char)a);
	printf("0100 0110  %c = %u\n", F, (unsigned char)F);
	printf("0100 0000  %c = %u\n", res, res);
	return(0);

}
