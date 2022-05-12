/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:35:41 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/12 19:43:24 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// Ascii 48-0 to 57-9, 65-A to 90-A, 97-a to 122-z

#include <stdio.h>

int ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

int main(void)
{
	char n;
	printf("Escribe un caracte para combrobar si es Alfanumérico:\n");
	scanf("%c", &n);
	printf("El resultado '%c' es: %d\n", n, ft_isalnum(n));
	;
}
