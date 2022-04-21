/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:47:50 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/20 14:57:03 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// argc contiene el numero de argumentos pasados mediante la linea de cmd
// while mientras no ecuentre null
// argv = [test1, test2, test3]  = 3; 
// write todos lo caracteres del interior de una posicion de argv
// argv[3 -1][x] ---> es el ultimo parametro intrducido...
//

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = 1;
	while (i < argc)
	{
		x = 0;
		while (argv[argc - i][x] != '\0')
		{
			write(1, &argv[argc - i][x], 1);
			x++;
		}
		write(1, "\n", 1);
		i++;
	}
}
