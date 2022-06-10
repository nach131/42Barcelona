/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtok.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:37:57 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/07 12:38:22 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "42 Barcelona is the best";
	int init_size = strlen(str);
	char delim[] = " ";

	char *ptr = strtok(str, delim);

	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}

	/*  Este bucle mostrará que hay ceros en la cadena después de tokenizar */
	for (int i = 0; i < init_size; i++)
	{
		printf("%d ", str[i]); /* Convierta el carácter a entero, en este caso
							   el equivalente ASCII del carácter */
	}
	printf("\n");

	return 0;
}
 //  '42'
 //  'Barcelona'
 //  'is'
 //  'the'
 //  'best'
 //  52 50 0 66 97 114 99 101 108 111 110 97 0 105 115 0 116 104 101 0 98 101 115 116
