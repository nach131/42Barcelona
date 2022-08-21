/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freed_malloc_if.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:58:35 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/21 23:01:43 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <stdlib.h>

void func2(char **str)
{
	free(*str);	 // free
	*str = NULL; // Set to NULL
}

void func1(char **str) // func1 receives as **
{
	func2(str); // Pass pointer to func2()
}

int main()
{
	char *str = NULL;
	str = (char *)malloc(10);
	func1(&str); // Pass Address of pointer to func1()

	if (str) // Check for NULL
	{
		printf("\n Not - Freed...\n");
	}
	else
	{
		printf("\n Freed...\n");
	}
	return 0;
}
