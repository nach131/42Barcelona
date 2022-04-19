/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:39:20 by yeselee           #+#    #+#             */
/*   Updated: 2022/04/19 16:45:13 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	indice;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	indice = 0;
	if (dest_len >= size)
		return (src_len + size);
	while (dest_len + indice + 1 < size && src[indice] != '\0')
	{
		dest[dest_len + indice] = src[indice];
		indice++;
	}
	dest[dest_len + indice] = '\0';
	return (dest_len + src_len);
}

int	main(void)
{
	char *s1_test1_o = "a";
	char s2_test1_o[100] = "b";
	unsigned int n;
	unsigned int len_obt;
	n = 10;
	len_obt = ft_strlcat(s2_test1_o, s1_test1_o, n);

	printf("resultado: %d\n", len_obt);
}
