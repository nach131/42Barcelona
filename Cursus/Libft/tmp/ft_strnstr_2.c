/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:22:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/26 23:43:21 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include"libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
//	printf("ft:\n haystack:%c\n needle:%c\n", haystack[0], needle[0]);
//	int	i;

//	i = 0;
//	if (*needle== '\0')

//	while (len > 0)
//	{
//		printf("l%zu, ", len);
//		while(haystack[i] != '\0')
//		{
//		printf("i%d, ", i);
//		if (haystack[i] == needle[i])
//		{
//			printf("if");
//		}
//		i++;
//		}
//		len--;
//	}
//	return (NULL);
//}
	char 	c, sc;
	size_t	l;
	
	if ((c =  *needle++) != '\0')
	{
		l = ft_strlen(needle);
		printf("a: %c, l: %zu\n", c, l);
//		if (len-- < 1 || (sc = *haystack++) == '\0')
//			return (NULL);
//		while (sc != c)
//		{
//			if (l > len)
//			{
//				return (NULL);
//			}
//			
//			
//		printf("%c, ", sc);
//		}
	}
//	{
//		l = ft_strlen(needle);
//		if (len-- < 1 || (sc = *haystack++) == '\0')
//			return (NULL);
//		while (sc != c)
//			if (l > len)
//				return (NULL);
//		while (ft_strncmp(haystack, needle, len) != 0)
//				haystack--;
////		printf("if: %c, ", c);
//	}
	return ((char *)haystack);
}

int	main(void)
{
	const char	hays[50] = "42Barcelona es la mejor";
	const char	need[10] = "mejor";
	char *res;

	res = ft_strnstr(hays, need, 5);
	printf("\nmain: %s\n", res);
}

