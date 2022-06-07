/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:15:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/07 15:57:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../src/libft.h"

void *ft_memset(void *str, int c, size_t n)\
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
	return (ch);
}

int main(void)
{
	char str[] = "esta es la frase";

	ft_memset(str, '@', 5);
//	ft_memset(str, '@', sizeof(str));
	printf("main %s\n", str);
}

//  ch la copia del str: @@@@@es la frase
//  str original: @@@@@es la frase, @, 5
//  
//  main @@@@@es la frase
