/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:01:03 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 22:31:53 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// Concatena dos string el dst tiene que tener capacidad para los datos a copiar

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	i = 0;
	if (dst_len + 1 > size)
	{
		return (src_len + size);
	}
	if (dst_len <= size)
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
// int main(void)
// {
// 	char src[] = "Barcelona";
// 	char dst[15] = "42 ";
// 	size_t n;
// 	int r;
// 
// 	n = 13;
// 	r = ft_strlcat(dst, src, n);
// 	printf("src: %s\n dst: %s\n size: %zu\nretorno: %d\n", src, dst, n, r);
// }
// // main:
// //  src: Barcelona
// //  dst: 42 Barcelona
// //  size: 13
// // retorno: 12
