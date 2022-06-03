/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:22:54 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/03 10:55:50 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

# include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);

	if (!(res = (char*)malloc(sizeof(*res) * (len_s1 + len_s2 + 1))))
		return (0);
	ft_memcpy(res, s1, len_s1);
	ft_memcpy(res + len_s1, s2, len_s2);	
	res[len_s1 + len_s2] = '\0';
	return (res);
}
//
//int	main(void)
//{
//	char	str1[] = "42";
////	char	str2[5] ={'\0','\0'};
//	char	str2[] = " Barcelona";
//	char	*res;
//
//	str1[0] = '\0';
////	str2[0] = '\0';
//		
//	res = ft_strjoin(str1, str2);
//	printf("res: %s\n", res);
////	int	x;
////	x = sizeof(res);
////	printf("size res: %i\n", x);
//}
