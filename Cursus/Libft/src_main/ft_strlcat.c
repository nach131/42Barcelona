/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:01:03 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/19 18:55:52 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t 	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	i = 0;
	if (dst_len > size)
		return (src_len + size);
	else if (dst_len <= size)
	{
		while (src[i] != '\0' && j < size - 1)
		{
		dst[j] = src[i];
		i++;
		j++;
		}
		dst[j] = '\0';
	}
	return (src_len + dst_len);
}

//int	main(void)
//{
//	char	src[] = "Barcelona";
//	char	dst[15] = "42 ";
//	size_t	n;
//	int		r;
//
//	n = 5;
//	r = ft_strlcat(dst, src, n);
//	printf("main: \n src: %s\n dst: %s\n size: %zu\nretorno: %d\n", src, dst, n,r);
//}

