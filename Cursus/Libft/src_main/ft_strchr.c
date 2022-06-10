/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:19:52 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/07 16:08:01 by nmota-bu         ###   ########.fr       */
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

	i = ft_strlen(s);
	while (1 >= 0)
	{
		if (s[i] == (char)c)
		return ((char *)(s + i)); // retorna despues del char ci
		i--;
	}
	return (NULL);
}

int main(void)
{
	const char str[] = "42 Barcelona @ campus de programación @ más innovador";
	const char ch = '@';
	char *res;

	res = ft_strchr(str, ch);

	printf("\nmain: \n res: %s\n", res);
}
//  main:
//   res: @ más innovador
