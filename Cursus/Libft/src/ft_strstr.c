/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:22:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/26 19:39:09 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include"libft.h"
char	*ft_strstr(const char *haystack, const char *needle)
{

	return ("toma");
}

int	main(void)
{
	const char	hays[50] = "42Barcelona es la mejor";
	const char	need[10] = "mejor";
	char *res;

	res = ft_strstr(hays, need);
	printf("main: %s\n", res);
}

