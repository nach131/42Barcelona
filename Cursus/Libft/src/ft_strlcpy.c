/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:13:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/15 12:30:46 by nmota-bu         ###   ########.fr       */
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
	char 		ds;
	const char	sr;

	ds = (char *)dst;
	sr = (char *)src;
	i = 0;
	while (i < size)
	{
		ds[i] = sr[i];
		printf("while\n");
		i++;
	}
	return (0);
}

int	main(void)
{
	char	dst[12];
	char	src[12] = "42 Barcelona";
	size_t	n;

	n = 4;
	
	ft_strlcpy(dst, src, n);
	printf("main: \n src: %s\n dst: %s\n", src, dst);
return (0);
}
