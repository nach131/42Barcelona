/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:13:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/16 17:26:01 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy	(char *dst, const char *src, size_t size)
{
	size_t 		i;
	char 		*ds;
	const char	*sr;

	ds = dst;
	sr = src;
	i = 0;

	printf("strlcpy: %s\n", src);
	while (i < size)
	{

		ds[i] = sr[i];
		printf("while\n");
		i++;
	}
	return (ft_strlen(src));
}

int	main(void)
{
	char	src[] = "42 Barcelona";
	char	dst[20];
	size_t	n;

	n = 4;
	
	ft_strlcpy(dst, src, n);
	printf("main: \n src: %s\n dst: %s\n lenght src: %lu\n", src, dst, sizeof(src));
return (0);
}
