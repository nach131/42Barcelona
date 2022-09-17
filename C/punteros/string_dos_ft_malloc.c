/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_dos_ft_malloc.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:15:48 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/09/04 14:00:39 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	size_t len_s1;
	size_t len_s2;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	res = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(*res));
	if (!res)
		return (0);
	memcpy(res, s1, len_s1);
	memcpy(res + len_s1, s2, len_s2);
	res[len_s1 + len_s2] = '\0';
	return (res);
}

void ft_job2(char **s)
{
	char *str = "Asi es como se pasa";
	char *toma = " y se junta en 42 Barcelona";

	*s = ft_strjoin(str, toma);
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
	free(str);
}

// Asi es como se pasa y se junta en 42 Barcelona
