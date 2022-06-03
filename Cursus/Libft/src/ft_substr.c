/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:19:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/03 13:34:04 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (len > (len_s - start))
		len = len_s - start;
	if (start > len_s)
		return (ft_strdup(""));
	res = (char *)malloc(sizeof(*s) * (len + 1));
	if (!res)
		return (NULL);
	strlcpy(res, &((char *)s)[start], (len + 1));
	return (res);
}
