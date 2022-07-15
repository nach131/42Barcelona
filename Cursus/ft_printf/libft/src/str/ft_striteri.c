/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:56:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/19 17:32:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//	Aplica la función ’f’ a cada caracter de la string dada como argumento, 
//	pasando su índice como primer argumento. Cada caracter se pasa como
//	una dirección a ’f’, por si hace falta modificarlo
//	#1. La string que iterar.
//	#2. La función a aplicar a cada caracter.

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//void	funcion(unsigned int i, char *c)
//{
//	c[0] = c[0] +i;
//	printf("%c\n", c[0]);
//}
//
//int main(void)
//{
//	char	str[] = "42 Barcelona";
//	char	p[0];
//
//	p[0] = 'A';
//
//	funcion(1, p);
//	printf("c: %c\n", p[0]);
//
//	ft_striteri(str, funcion);
//}
