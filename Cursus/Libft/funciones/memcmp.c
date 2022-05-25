/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:29:49 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/25 09:45:00 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// int memcmp(const void *str1, const void *str2, size_t n)
// compara los primeros n bytes del área de memoria str1 y el área de memoria str2.
// str1 - Primer puntero a un bloque de memoria.
// str2 - Segundo puntero a un bloque de memoria.
// n 	- Este es el número de bytes a comparar.
// VALORES DE RETORNO
// valor < 0 str1 es es menor que str2
// valor > 0 str1 es mayor que str2
// valor = 0 str1 es igual a str2

#include<stdio.h>
#include<string.h>

int main ()
{
	char	str1[10] = "AbCD";
	char	str2[10] = "ABcd";
	int		res;

	res = memcmp(str1, str2, 2);

	if(res < 0)
		printf("res: %d, str1 es es menor que str2\n",res);
   	else if(res > 0)
		printf("res: %d, str1 es es mayor que str2\n",res);
	else
		printf("res: %d, str1 es igual str2\n",res);
return (0);
}
