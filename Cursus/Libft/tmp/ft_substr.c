/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:19:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/02 12:04:21 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*res;	
	int		i;
	size_t	j;

//	res = (char *)s;
	printf(" string: %s\n start: %d \n len: %zu\n", s, start, len);

	res = (char *)malloc(sizeof(*s) * (len + 1));
	if(!s)
		return (NULL);
	i = 0;
	j = 0;
	while(s[i])
	{
		printf("%d: %c ",i, s[i]);
		if (i >= start && j < len)
		{
		res[j] = s[i];
		j++;
		}
		i++;
	}
	res[j] = '\0';

	return (res);
}

int	main(void)
{
	char	str[] = "42 Barcelona";
	int		start;
	int		len;
	char	*res;

	int	x;
	x = sizeof(res);

	start = 3;
	len	=	9;

//	res = ft_substr(NULL, start, len);
	res = ft_substr(str, start, len);
	printf("\nres: %s\n len_res: %i\n", res, x);
}
