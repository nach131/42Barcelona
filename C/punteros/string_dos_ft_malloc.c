/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_dos_ft_malloc.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:15:48 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/09/02 19:39:55 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_job2(char **s)
{
	// char *str = "Asi es como se pasa";
	*s = malloc(4);
	*s[0] = '@';
	// *s = str;
}

void ft_job1(char **s)
{
	// char *str = "42 Barcelona";
	// *s = str;
	ft_job2(&(*s)); // PARA PASAR A OTRA FUNCIÓN
}

int main(void)
{
	char *str = (NULL);

	ft_job1(&str);
	printf("%s\n", str);
}
