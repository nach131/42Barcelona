/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 08:40:22 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/09 22:50:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

int	ft_num_digitos(int n)
{
	int num_digitos;

	num_digitos = 0;
	if (n == 0)
		return (1);
	if ( n < 0)
	{
		num_digitos = 1;
		printf("aki:-%d\n", num_digitos);
	}

	while (n)
// 	while (n > 0)
	{
// 		if (n > 0)
// 		{
			printf("+%d\n", num_digitos);
			n /= 10;
			num_digitos++;
// 		}
 // 		else if (n < 0)
// 		{
// 			num_digitos =3; // ESTA FORZADO 
//  			printf("%d\n", num_digitos);
//  			n /= 10;
//  			num_digitos++;
// 		}
}
	
	printf("fuera: %d\n", num_digitos);
return (num_digitos);
}

void numeros(char *s, int nd, int n)
{
	printf("\tn: %d\n",n);
// 	printf("digitos: %d\n",nd);
	if (n == 0)
	{
 		s[0] = '0';
 		s[1] = '\0';
// 		printf("\tes cero\n");
	}
	if (n < 0)
	{
		printf("nd-: %d\n",nd);
		printf("\tes negativo\n");
		s[0] = '-';
		n *= -1;
	}
	while(n > 0)
	{
	printf("nd+: %d\n",nd);
	s[--nd] = n % 10 + '0';
	n /= 10;
	}
	printf("\tn: %d",n);

}

char	*ft_itoa(int n)
{
	char	*res;
	int		n_digitos;

	n_digitos =	ft_num_digitos(n);
//	printf("\tint: %d\n", n);
	printf("digitos: %d\n", n_digitos);
   	res = (char *)ft_calloc((ft_num_digitos(n)) + 1, sizeof(char));
	
	numeros(res, n_digitos, n);

// 
	if(!res)
		return (NULL);
	return (res);
}

int	main(void)
{
// 	char	res;
//  	res = ft_itoa(4343);

	printf("main : %s\n", ft_itoa(-1234567));	
}
