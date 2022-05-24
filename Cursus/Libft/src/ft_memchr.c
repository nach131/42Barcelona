/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:04:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/21 14:17:53 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include"libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)str;


	i = 0;
	while ( i < n)
	{
		if (s == (unsigned char *)c)
				return (s);
				i++;
				printf("%zu %s,",i, s);
}
	
	printf("\nft:\n str: %s\n c: '%c'\n n: %zu\n", str, c, n);

//	return (NULL);
}

int	main(void)
{
	const char	str[] = "42 Barcelona. Campus de programación más innovador";
	int			ch = '.';
	char		*res;

	res = ft_memchr(str, ch, ft_strlen(str));
	
	printf("res: %s\n", res);
	return (0);
}
