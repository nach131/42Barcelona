/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doble_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:26:16 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/12/03 13:31:59 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int print_arr(char **s)
{
	int i = 0;
	while (s[i])
	{
		printf("%s\n", s[i]);
		i++;
	}
	return (i);
}

int main(void)
{
	char **arr;

	arr = (char **)calloc(4, sizeof(arr));
	int i = 0;

	arr[0] = strdup("42 Barcelona");
	arr[1] = strdup("42 Madrid");
	arr[2] = strdup("42 Malaga");
	// arr[3] = strdup("42 Paris");
	// arr[4] = strdup("42 Malaga");

	printf("len arr: %i\n", print_arr(arr));

	return (131);
}
