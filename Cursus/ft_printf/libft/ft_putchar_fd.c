/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:35:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/19 11:12:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// Envía el caracter ’c’ al file descriptor dado.
//	#1. El caracter a enviar.
//	#2. El file descriptor sobre el que escribir.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}

//int	main(void)
//{
////	write(1, "T", 1);
////	write(1, "A", 1);
//	ft_putchar_fd('4', 1);
//	ft_putchar_fd('2', 1);
//	ft_putchar_fd('\n', 1);
//return (0);
//}
// 42
