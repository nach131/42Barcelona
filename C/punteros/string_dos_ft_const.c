/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_dos_ft_const.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:15:48 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/09/04 20:44:58 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void *ft_job1(const char *s, int n)
{
	char *tmp = NULL;

	tmp = (char *)malloc(5);
	if (!tmp)
		return NULL;
	else
	{
		int i = 0;
		while (i < n)
		{
			tmp[i] = s[i];
			i++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}

void job2(char **s)
{
	char *str = "42 Barcelona";

	*s = ft_job1(str, 3);
}

int main(void)
{
	char *res;

	job2(&res);
	//===========================================================================================
	// char *str = "42 Barcelona";
	// res = ft_job1(str, 4); // asi funciona directamente
	//===========================================================================================

	printf("%s\n", res);
	free(res);
}

// 42 Barcelona
