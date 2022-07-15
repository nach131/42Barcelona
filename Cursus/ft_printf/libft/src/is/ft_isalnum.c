/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:35:41 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/18 11:49:56 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//Ascii 48-0 to 57-9, 65-A to 90-A, 97-a to 122-z
// llamo a ft_isalpha y ft_isdigit

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
// int main(void)
// {
// 	char n;
// 	printf("Escribe un carácter para comprobar si es Alfanumérico:\n");
// 	scanf("%c", &n);
// 	printf("El resultado '%c' es: %d\n", n, ft_isalnum(n));
// 	;
// }
