/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:15:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/13 20:35:44 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include "libft.h"

void ft_memset(void *str, int c, size_t n)\
{
	char	*ch;
	ch = str;
	
	while(n > 0)
	{
		ch[n-1] = c;
		n--;
	}
	printf("ch la copia del str: %s\n", ch);
	printf("str original: %s, %c, %zu\n\n", str, c, n);
}

int main(void)
{
	char str[20] = "esta es la frase";

	ft_memset(str, '@', 7);
	printf("main %s\n", str);
}
