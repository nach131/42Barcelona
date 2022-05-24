/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 10:16:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/16 16:38:02 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*ds;
	const char	*sr;

	i = len;
	ds = (char *)dst;
	sr = (char *)src;
	if (dst != NULL || src != NULL)
	{
		if (src > dst)
		{
			ft_memcpy(dst, src, len);
		}
		else
		{
			while (i)
			{
				ds[i -1] = sr[i -1];
				i--;
			}
		}
		return (ds);
	}
	return (NULL);
}