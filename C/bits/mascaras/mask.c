/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mask.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:41:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/10/20 23:16:29 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>

#define AMARILLO 1 << 7
#define ROJO 1 << 6
#define AZUL 1 << 5
#define VERDE 1 << 4
#define BLANCO 1 << 3
#define NEGRO 1 << 2
#define MAGENTA 1 << 1
#define CIAN 1 << 0

void operacion(unsigned char colors)
{
	printf("colors = %u", colors); // colors = 184 - 1 0 1 1  1 0 0 0
}

int main()
{
	operacion(AMARILLO | AZUL | VERDE | BLANCO);
}
