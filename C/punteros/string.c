/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 18:15:48 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/09/02 19:10:12 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_job(char **s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		printf("%d\n", i);
		s[i] = "@";
		i++;
	}
	return (1);
}

void ft_job3(char *s)
{
	int i = 0;
	s = malloc(3);
	// s = "42";
	write(1, "@", 1);
	s[0] = '!';
	// while (i < 3)
	// {
	// 	s[i] = '@';
	// 	i++;
	// }
}

void ft_job2(char **s)
{
	char *str = "42 Barcelona";
	*s = str;
}

int main(void)
{
	char *str = (NULL);

	ft_job2(&str);
	printf("%s\n", str);
}
