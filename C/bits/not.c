/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:47:50 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/10/20 10:59:21 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */


  #include <stdio.h>

int	main(void)
{

	unsigned char a = 97;

	printf("0110 0001  a = %u\n", (unsigned char)a);   
	printf("1001 1110 ~a = %u\n", (unsigned char)~a);   
	return(0);

}
