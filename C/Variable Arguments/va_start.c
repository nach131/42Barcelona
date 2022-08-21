/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:48:48 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/11 15:46:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// inicializa la variable ap para ser utilizada con las macros va_arg y va_end.
// last_arg es el último argumento fijo conocido que se pasa a la función, 
// es decir, el argumento antes de los puntos suspensivos.

// ap - Este es el objeto de va_list y contendrá la información necesaria para
//		recuperar los argumentos adicionales con va_arg.
// last - This is the last known fixed argument being passed to the function.

#include<stdarg.h>
#include<stdio.h>

int	suma(int, ...);

int	main(void) {

	printf("Suma de 10, 20 y 30 = %d\n", suma(3, 10, 20, 30));
	printf("Suma de 4, 20, 25 y 30 = %d\n", suma(4, 4, 20, 25, 30));

	return 0;
}

int suma(int num_args, ...) {
	int resultado = 0;
	va_list ap;  // declaramos los elementos de la lista
	int i;

	va_start(ap, num_args); // iniciamos la variable app
	for(i = 0; i < num_args; i++) {
		resultado += va_arg(ap, int); // sumamos los valores de ap con resultado
	}
	va_end(ap);

	return resultado;
}
// Suma de 10, 20 y 30 = 60
// Suma de 4, 20, 25 y 30 = 79
