/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:37:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/20 18:44:17 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;;
	j = 0;
	while ( s[i] != '\0')
	{
		printf("%d,",i);
		if (s[i] == c)
		{	
			j = i + 1;
			printf("\nIF: \n " );

		}
		i++;
	}
	if (j)
	{
		printf("\nj: %d\n", j);
		return ((char *)(s + j - 1));
	}
	else if (s[i] == c)
		return ((char *)(s + i));
	return (NULL);
}
//			return ((char *)(s + i));

//int	main(void)
//{
//	const	char str[] = "42 Barcelona. campus. de programación más innovador";
//	const	char ch = '.';
//	char *res;
//
//	res = ft_strrchr(str, ch);
//	printf("\nmain:\n str: %s\n res: %s\n", str, res);
//}

//0,1,2,3,4,5,6,7,8,9,10,11,12,
//IF:
// 13,14,15,16,17,18,19,20,
//IF:
// 21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,
//j: 21
//
//main:
// str: 42 Barcelona. campus. de programación más innovador
// res: . de programación más innovador
