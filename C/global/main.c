/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:29:42 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/08/21 17:33:14 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "globals.h"
#include <stdio.h>

int	g_global_variable = 0; // Definición de la variable global

int	main(void)
{
	g_global_variable = 5; // Inicialización de la variable global
	// Llamada a la función en el archivo sumar.c
	sumar();
	// Imprimir el valor actual de la variable global
	printf("Valor de la variable global: %d\n", g_global_variable);
	return (0);
}
