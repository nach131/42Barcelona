/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:22:54 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/19 11:20:23 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// Reserva con malloc(3) una nueva string,
// basada en la unión de las dos strings dadas como parámetros.
// *s1 - La string prefijo.
// *s2 - La string sufijo.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = (char *)ft_calloc((len_s1 + len_s2 + 1), sizeof(*res));
	if (!res)
		return (0);
	ft_memcpy(res, s1, len_s1);
	ft_memcpy(res + len_s1, s2, len_s2);
	res[len_s1 + len_s2] = '\0';
	return (res);
}

//int	main(void)
//{
//	char	str1[] = "42";
////	char	str2[5] ={'\0','\0'};
//	char	str2[] = " Barcelona";
//	char	*res;
//
////	str1[0] = '\0';
////	str2[0] = '\0';
//
//	res = ft_strjoin(str1, str2);
//	printf("res: %s\n", res);
////	int	x;
////	x = sizeof(res);
////	printf("size res: %i\n", x);
//}

// res: 42 Barcelona
