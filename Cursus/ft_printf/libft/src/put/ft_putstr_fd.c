/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:18:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/19 11:13:31 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// Escribe la string ’s’ en el file descriptor indicado.
//	#1. La string que imprimir.
//	#2. El file descriptor sobre el que escribir.

#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], sizeof(char));
		i++;
	}
}

//int	main(void)
//{
//ft_putstr_fd("42 Barcelona", 1);
//ft_putstr_fd("\n", 1);
//}
