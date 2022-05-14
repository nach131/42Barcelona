/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:15:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/14 10:33:43 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
//#include "libft.h"

void ft_memset(void *str, int c, size_t n)\
{
	char	*ch;
	ch = str;
	size_t	i;

	i = 0;
	while(i < n)
	{
//		printf("i: %d, n: %zu\n", i, n);
		ch[i] = c;
		i++;
	}
	printf("ch la copia del str: %s\n", ch);
	printf("str original: %s, %c, %zu\n\n", str, c, n);
}

int main(void)
{
	char str[20] = "esta es la frase";

//	ft_memset(str, '@', 5);
	ft_memset(str, '@', sizeof(str));
	printf("main %s\n", str);
}
