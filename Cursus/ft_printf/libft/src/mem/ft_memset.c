/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:15:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 11:57:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// str 	− Este es un puntero al bloque de memoria a llenar.
// c 	− Este es el valor a configurar. El valor se pasa como un int, 
// 		pero la función llena el bloque de memoria utilizando la conversión 
// 		de caracteres sin firmar de este valor.
// n 	− Este es el número de bytes que se establecerá en el valor.

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*ch;
	size_t	i;

	ch = str;
	i = 0;
	while (i < n)
	{
		ch[i] = c;
		i++;
	}
	return (ch);
}
// int main(void)
// {
// 	char str[] = "42 Barcelona";
// 	printf("Original: %s\n", str);
// 	ft_memset(str, '@', 5);
// //	ft_memset(str, '@', sizeof(str));
// 	printf("Despues de ft_memset:  %s\n", str);
// }
// // Original: 42 Barcelona
// // Despues de ft_memset:  @@@@@rcelona
