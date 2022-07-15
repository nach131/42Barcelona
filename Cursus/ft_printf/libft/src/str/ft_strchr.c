/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:19:52 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 12:19:02 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//	char *strchr(const char *str, int c)
//  busca la primera aparición del carácter c (un carácter sin signo) en la
//  cadena a la que apunta el argumento str.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c && s[i] != '\0')
		i++;
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

// char	*ft_strchr(const char *s)
// {
// 	while (*s)
// 	{
// 		if (*s == '%')
// 			return ((char *)s);
// 		s++;
// 	}
// 	if (!s)
// 		return ((char *)s);
// 	return (NULL);
// }
// int main(void)
// {
// 	const char str[] = "42 Barcelona @ campus de programación @ más innovador";
// 	const char ch = '@';
// 	char *res;
// 
// 	res = ft_strchr(str, ch);
// 	printf("\nmain: \n res: %s\n", res);
// }
// // main:
// //  res: @ campus de programación @ más innovador
