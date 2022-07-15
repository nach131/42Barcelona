/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:22:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 22:36:22 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// La función encuentra la primera aparición de la subcadena needle en la
// cadena haystack. Los caracteres finales '\0' no se comparan.

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return (&((char *)haystack)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
// int main(void)
// {
//     const char  hays[] = "42 Barcelona es la mejor";
//     const char  need[] = "mejor";
//     char *res;
// 
//     res = ft_strnstr(hays, need, 30);
//     printf("\nmain: %s\n", res);
// }
// // main: mejor
