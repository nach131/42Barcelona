/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:22:54 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/02 16:11:07 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

# include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	size_t	total;

	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	printf("total: %zu\n", total);
	if (!*s1 || !*s2)
		return (NULL);
	res = (char *)malloc(sizeof(char) * total);
	ft_strlcat(res, s1, total);	
	ft_strlcat(res, s2, total);	
	return (res);
}
//{
//	char *res;
////	int	len_s1;
////	int	len_s2;
//	size_t	total;
//
//	total = ft_strlen(s1) + ft_strlen(s2) + 1;
////	len_s1 = ft_strlen(s1);
////	len_s2 = ft_strlen(s2);
////	printf("len_s1: %d\nlen_s2: %d\n", len_s1, len_s2);
//	printf("total: %zu\n", total);
//	if (!s1 || !s2)
//		return (NULL);
//	res = (char *)malloc(sizeof(char) * total);
//	ft_strlcat(res, s1, total);	
//	ft_strlcat(res, s2, total);	
//
//		int	x;
//		x = sizeof(res);
//		printf("size res: %i, %d\n", x, x);
//
//	return (res);
//}
int	main(void)
{
	char	str1[5] ="42";
//	char	str2[5] ={'\0','\0'};
	char	str2[15] = " Barcelona";
	char	*res;
	res = ft_strjoin(str1, str2);
	printf("res: %s\n", res);
	int	x;
	x = sizeof(res);
	printf("size res: %i\n", x);
}
