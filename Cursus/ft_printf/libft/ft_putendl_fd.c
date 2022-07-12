/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:35:21 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/19 11:15:50 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//	Escribe la string ’s’ en el file descriptor indicado,
//	seguido de un salto de línea.
//		#1. La string que escribir.
//		#2. El file descriptor sobre el que escribir.

#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], sizeof(char));
		i++;
	}
	write(fd, "\n", 1);
}
//int main(void)
//{
//	ft_putendl_fd("42 Barcelona", 1);
//}
