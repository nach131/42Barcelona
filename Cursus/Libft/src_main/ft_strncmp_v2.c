/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:40:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/20 22:52:34 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2)
{
	int	i;
	int	sum;

	i = 0;
	while (s1[i] != '\0')
	{
		sum = sum + (unsigned char)s1[i];
		printf("%d:%d,", i, s1[i]);
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		sum = sum - (unsigned char)s2[i];
		printf("%d:%d,", i, s2[i]);
		i++;
	}
	printf("\nsum: %d\n", sum);
	return (sum);
}

int	main(void)
{
	char 	str1[] = "AB";
	char 	str2[] = "Ab";
	int		res;

	res = ft_strncmp(str1, str2);
	printf("\nmain:\n res: %d\n", res);
}
