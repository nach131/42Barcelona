/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:01:34 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 12:26:49 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// compara los primeros n bytes del área de memoria str1
// y el área de memoria str2.
// str1 - Primer puntero a un bloque de memoria.
// str2 - Segundo puntero a un bloque de memoria.
// n 	- Este es el número de bytes a comparar.
// VALORES DE RETORNO
// valor < 0 str1 es es menor que str2
// valor > 0 str1 es mayor que str2
// valor = 0 str1 es igual a str2

#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = str1;
	s2 = str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
			i++;
	}
	return (0);
}
// int	main(void)
// {
// 	int	res;
// 	char str1[] = "AbCD";
// 	char str2[] = "ABcd";
// 
// 	res = ft_memcmp(str1, str2, 2);
// 	printf("res: %d\n", res);
// }
// 
// // toma: A
// // res: 32
