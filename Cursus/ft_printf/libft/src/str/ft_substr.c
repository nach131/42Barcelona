/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:19:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/19 10:15:08 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//  Reserva con malloc(3) memoria para devolver una string nueva basada 
//  en la string ’s’. La nueva string empieza en el índice ’start’ y
//  tiene una longitud máxima ’len’.

// *s		- La string de la que formar la nueva.
// start	- El índice de la string por el que empezar la nueva string.
// len		- La longitud máxima de la nueva string.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (len > (len_s - start))
		len = len_s - start;
	if (start > len_s)
		return (ft_strdup(""));
	res = (char *)ft_calloc((len + 1), sizeof(*s));
	if (!res)
		return (NULL);
	ft_strlcpy(res, &((char *)s)[start], (len + 1));
	return (res);
}
//int	main(void)
//{
//	char	str[] = "42 Barcelona";
////	char	str[] = "";
//	int		start;
//	int		len;
//	char	*res;
//
//	int	x;
//	x = sizeof(res);
//	
//	start = 3;
//	len	=	5;
//
////	res = ft_substr(NULL, start, len);
//	res = ft_substr(str, start, len);
//	printf("\nres: %s\n len_res: %i\n", res, x);
//}
//res: Barce
// len_res: 8
