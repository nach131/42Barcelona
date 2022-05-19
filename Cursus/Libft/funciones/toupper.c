/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:32:01 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/19 20:44:28 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// convierte de Minusculas a  Mayusculas
//  int	toupper(int c);

#include <ctype.h>
#include<stdio.h>

int	main(void)
{
	char	c;

	printf("Escribe una letras en Mayusculas\n");
	scanf("%c", &c);
	printf("es: %c\n", toupper(c));

}
