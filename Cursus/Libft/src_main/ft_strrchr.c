/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:37:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/26 19:38:01 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include "../src/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	
	int y;
	y = (s[12] == (char)c);

	i = ft_strlen(s);
	printf("compara: %d\n", y);
	printf("*s: %c\n", s[12]);
	printf("c: %c\n", c);
	printf("s: %s\n", (char *)(s +20));
	
		while (i >= 0)
		{
		printf("%d, ", i);
		
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

int	main(void)
{
	const	char str[] = "42 Barcelona. campus. de programación más innovador";
	const	char ch = '.';
	char *res;

	res = ft_strrchr(str, ch);
	printf("\nmain:\n str: %s\n res: %s\n", str, res);
}
