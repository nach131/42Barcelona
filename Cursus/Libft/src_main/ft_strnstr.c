/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:22:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/30 11:03:20 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include"libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		printf("%zu:%c, ",i, haystack[i]);
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
				printf("aki-%zu:%c, ", j, needle[j]);
			if (needle[j + 1] == '\0')
				return (&((char *)haystack)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
    const char  hays[50] = "42Barcelona es la mejor";
    const char  need[10] = "mejor";
    char *res;

    res = ft_strnstr(hays, need, 30);
    printf("\nmain: %s\n", res);
}
