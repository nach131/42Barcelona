/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:37:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 12:21:30 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// char *strchr(const char *s, int c);
// busca la última aparición del carácter c (un carácter sin signo) 
// en la cadena a la que apunta, mediante el argumento str.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const	char str[] = "42 Barcelona. campus. de programación más innovador";
// 	const	char ch = '.';
// 	char *res;
// 
// 	res = ft_strrchr(str, ch);
// 	printf("\nmain:\n str: %s\n res: %s\n", str, res);
// }
// // main:
// //  str: 42 Barcelona. campus. de programación más innovador
// //  res: . de programación más innovador
