/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:40:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/07 16:44:28 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../src/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && i < n && s1[i] == s2[i])
	{
		i++;
		printf("%zu:%d,", i, s1[i]);
        printf("%zu:%d,", i, s2[i]);
	}
		if (i != n)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	
	return (0);
}

int	main(void)
{
	char 	str1[] = "ABCDF";
	char 	str2[] = "ABCdF";
	int		res;

	res = ft_strncmp(str1, str2, 5);
	printf("\nmain:\n res: %d\n", res);
}
//  1:66,1:66,2:67,2:67,3:68,3:100,
//  main:
//   res: -32
