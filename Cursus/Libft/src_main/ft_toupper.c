/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:49:42 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/19 22:09:45 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (c);
	}
	else if (c >= 97 && c <= 122)
		return (c - 32);
	else
	return (c);
}

//int	main(void)
//{
//	char	c;
//	int		r;
////	c = 'A';
//    printf("Escribe una letras en Mayusculas\n");
//	scanf("%c", &c);
//	r = ft_toupper(c);
//
//	printf("main: %c\n", r);
//}


