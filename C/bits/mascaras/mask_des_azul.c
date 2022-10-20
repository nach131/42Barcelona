/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mask_des_azul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:41:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/10/21 00:09:38 by nmota-bu         ###   ########.fr       */
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
	// printf("colors = %u", colors); // colors = 184 - 1 0 1 1  1 0 0 0
	// para desactivar el color azul

	colors &= ~(AZUL);

	if (colors & AMARILLO)
		printf("Amarillo\n");
	if (colors & ROJO)
		printf("rojo\n");
	if (colors & AZUL)
		printf("Azul\n");
	if (colors & VERDE)
		printf("Verde\n");
	if (colors & BLANCO)
		printf("Blanco\n");
	if (colors & NEGRO)
		printf("Negro\n");
	if (colors & MAGENTA)
		printf("Magenta\n");
	if (colors & CIAN)
		printf("Cian\n");
}

int main()
{
	operacion(AMARILLO | AZUL | VERDE | BLANCO);
}

// Amarillo
// Verde
// Blanco
