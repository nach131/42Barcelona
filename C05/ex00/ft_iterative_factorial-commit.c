/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:40:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/18 17:59:28 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Factorial se deben multiplicar todos los números enteros y positivos
// que hay entre el número que aparece en la fórmula y el número 
// 5! =	5 x 4 x 3 x 2 x 1	= 120
// x *= exp Producto

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int indice;
	int resultado;

	indice = 1;
	resultado = 1;
	if (nb < 0) // si es menor de 0 o negativo return 0
		return(0);
	while (indice <= nb) // mientras indice sea menor o igual a nb 
	{
		resultado *= indice; // asigna a resultado el producto de indice
		indice++;
	}


printf("valor final de indice: %d\n", indice);
return(resultado);
}

int main(void)
{
int resultado;
resultado =	ft_iterative_factorial(5);

printf("resultado: %d", resultado);
}
