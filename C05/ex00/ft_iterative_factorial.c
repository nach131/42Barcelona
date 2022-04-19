/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:40:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 21:58:39 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// Factorial se deben multiplicar todos los números enteros y positivos
// que hay entre el número que aparece en la fórmula y el número
// 5! =	5 x 4 x 3 x 2 x 1	= 120
// x *= exp Producto

int	ft_iterative_factorial(int nb)
{
	int	indice;
	int	resultado;

	indice = 1;
	resultado = 1;
	if (nb < 0)
		return (0);
	while (indice <= nb)
	{
		resultado *= indice;
		indice++;
	}
	return (resultado);
}
