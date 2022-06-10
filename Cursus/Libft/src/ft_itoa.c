/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 08:40:22 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/10 12:27:43 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

int	ft_num_digitos(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	numeros(char *s, int nd, long n)
{
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
	}
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		s[--nd] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	int		n_digitos;

	n_digitos = ft_num_digitos(n);
	res = (char *)ft_calloc(n_digitos + 1, sizeof(char));
	if (!res)
		return (NULL);
	numeros(res, n_digitos, n);
	return (res);
}

// int	main(void)
// {
// // 	char	res;
// //  	res = ft_itoa(4343);
// 
// 	printf("main : %s\n", ft_itoa(-1234567));	
// 	printf("main : %s\n", ft_itoa(-2147483647 -1));	
// }
