/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doble_str_pasado.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:26:16 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/12/15 08:35:30 by nmota-bu         ###   ########.fr       */
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
	s[0][0] = '8'; // CAMBIO EL PRIMER CHAR
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

	printf("len arr: %i\n", print_arr(&*arr));

	return (131);
}

// 82 Barcelona
// 42 Madrid
// 42 Malaga
// len arr: 3

//===============MAS SENCILLO==============================================================
// void job_2(char **arr)
// {
// 	arr[0][1] = '4';
// }

// void job_1(char **arr)
// {
// 	arr[0][0] = '8';
// 	job_2(arr);
// }

// int main(void)
// {
// 	char **arr;
// 	int i = 0;

// 	arr = (char **)calloc(4, sizeof(arr));

// 	arr[0] = strdup("42 Barcelona");
// 	arr[1] = strdup("42 Madrid");
// 	arr[2] = strdup("42 Malaga");

// 	job_1(arr);

// 	printf("%s\n", arr[0]);
// }
// 84 Barcelona
