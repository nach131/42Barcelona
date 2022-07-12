/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:10:14 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/19 14:55:51 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// Aplica la función ’f’ a cada caracter de la string ’s’ para crear la nueva
// string, resultado de aplicar sucesivas veces ’f’ (utilizando malloc(3)).
// A esta función se le pasará el índice del caracter iterado.
//	#1. La string que iterar.
//	#2. Un puntero a la función que aplicar a cada caracter.

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	if (!s || !f)
		return (NULL);
	res = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

//char	funcion(unsigned int i, char c)
//{
//	return (c + i);
//}
//
//int	main(void)
//{
//	char	str[] = "42 Barcelona";
////	char	str[] = "a`qbdknm`";
//
//	printf("%c\n", funcion(1, 'X'));
//	printf("\t%s\n", ft_strmapi(str, funcion));
//}
