/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:01:34 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/26 14:19:03 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include"../src/libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
//{
//    const unsigned char *s1;
//    const unsigned char *s2;
//    size_t  i;
//
//    s1 = str1;
//    s2 = str2;
//    i = 0;
//	printf("aki: %c", s1[2]);
//    while (i < n)
//    {
//        if (s1[i] != s2[i])
//            return (s1[i] - s2[i]);
//            i++;
//    }
//    return (0);
//}
{
  size_t  i;
  i = 0;
printf("toma: %c\n", *(unsigned char *)(str1 + i ));
  while (i < n )
  {
  if (*(unsigned char *)(str1 + i ) != *(unsigned char *)(str2 + i))
      return (*(unsigned char *)(str1 + i) - *(unsigned char *)(str2 + i));
  i++;
  }
  return(0);

}
int	main(void)
{
	int	res;
	char str1[] = "AbCD";
	char str2[] = "ABcd";

	res = ft_memcmp(str1, str2, 2);

	printf("res: %d\n", res);

}
