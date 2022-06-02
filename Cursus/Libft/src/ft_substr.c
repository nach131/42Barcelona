/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:19:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/02 12:48:37 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
//{
//	char 	*res;	
//	size_t	len_s;
//
//	len_s = ft_strlen(s);
////	res = (char *)s;
//	if (len > (len_s - start))
//		len = len_s - start;
//	else if (start > len_s)
//		len = 0;
//	res = (char *)malloc(sizeof(*s) * (len + 1));
//	if (!s)
//		return (NULL);
//	ft_strlcpy(res, &((char *)s)[start], (len + 1));
//	printf(" string: %s, len:%zu\n start: %d \n len: %zu\n", s, len_s, start, len);
//	printf("res: %s\n",res);
//	return (res);
//}
{
	char 	*res;	
	size_t	len_s;

	len_s = ft_strlen(s);
	if (len > (len_s - start))
		len = len_s - start;
	else if (start > len_s)
		len = 0;
	res = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s)
		return (NULL);
	ft_strlcpy(res, &((char *)s)[start], (len + 1));
	return (res);
}

//int	main(void)
//{
//	char	str[] = "42 Barcelona";
//	int		start;
//	int		len;
//	char	*res;
//
//	int	x;
//	x = sizeof(res);
//
//	start = 3;
//	len	=	9;
//
////	res = ft_substr(NULL, start, len);
//	res = ft_substr(str, start, len);
//	printf("\nres: %s\n len_res: %i\n", res, x);
//}
