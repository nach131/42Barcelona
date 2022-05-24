/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:06:45 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/24 21:42:00 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include "../src/libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
//	printf("ft:\n str: %s\n ch: %c\n n: %zu\n", str, c, n);
	unsigned char *sr;
	sr = (unsigned char *)str;

	while (n)
	{
		printf("i:%zu, ",n);
		if (*sr == (unsigned char)c)
		{
			printf("%s",sr);
			return (sr);
		}
		else
			sr++;
		n--;
	}
	return (NULL);
}

int	main(void)
{
	const char str[] = "42 Barcelona. Campus de programación más innovador";
//	const	char str[] = "";
	char ch;
	char *res;

	ch	= '.';

	res = 	ft_memchr(str, ch, 20);

	printf("\nmain:\n str: %s\n char: %c\n", str, ch);
	printf("res: %s\n",res);
}
