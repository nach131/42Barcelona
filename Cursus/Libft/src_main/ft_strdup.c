/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:50:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/06 17:52:53 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

//  char *strdup(const char *s1)
//  función asigna memoria suficiente para una copia del string s1,
//   hace la copia y le devuelve un puntero.
//   el puntero posteriormente puede usarse como argumento de la función free(3).
//   para liberar la mememoria.

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

	printf("str: %s, puntero: %p\n", str, str);
	printf("res: %s, puntero: %p\n", res, res);
}

// str: 42 Barcelona, puntero: 0x7ffee6e4f950
// res: 42 Barcelona, puntero: 0x7fef3d405790
