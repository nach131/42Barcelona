/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:50:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/07 16:19:08 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../src/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	len;
	int		i;

	len = ft_strlen(s1) + 1;

	if(!s1)
		return (NULL);
	res = (char *)malloc(sizeof(*s1) * len);

	if(!res)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	return (res);
}

int	main(void)
{
	char	str[] ="42 Barcelona";
	char	*res = ft_strdup(str);

	printf("str original: %s, puntero: %p,%u\n", str, str);
	printf("res copiada: %s, puntero: %p,%u\n", res, res);
}
//  str original: 42 Barcelona, puntero: 0x7ffee57c88cb
//  res copiada: 42 Barcelona, puntero: 0x7f8215400350
