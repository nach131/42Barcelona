/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:19:52 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/23 19:52:24 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include "../src/libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		printf("%c", s[i]);
		i++;
	}
	printf("\nft: \n char: '%c'\n", c);

	//	return ((char *)s); // restorna todo
	if (s[i] == c)
		return ((char *)(s + i)); // retorna despues del char c
															// return ((unsigned char)(s + 1));
	return (NULL);
}

int main(void)
{
	// const char str[] = "42 Barcelona. campus de programación más innovador";
	// const char ch = '.';
	const char str[] = "tripouille";
	const char ch = 't';
	//	const char str[] = "...teste";
	//	const char ch = 't';
	char *res;

	res = ft_strchr(str, ch);

	printf("\nmain: \n res: %s\n", res);
}
// 42 Barcelona
// ft:
//  char: '.'
//
// main:
//  res: . campus de programación más innovadorv
