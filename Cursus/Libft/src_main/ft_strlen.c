/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:06:27 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/14 10:38:13 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// La función strlen() toma una cadena como argumento y devuelve su longitud.
// El valor devuelto es de tipo size_t (el tipo entero sin signo).

#include <stdio.h>
#include "libft.h"

int	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char w[20]="42Barcelona";

	printf("'%s' tiene %d caracteres\n",w, ft_strlen(w));
}

