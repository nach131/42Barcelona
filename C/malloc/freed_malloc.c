/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freed_malloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:33:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/22 00:51:56 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void func2(char *str)
{
	free(str);
}

void func1(char *str)
{
	func2(str);
}

int main()
{
	char *str;
	str = (char *)malloc(12);
	if (!str)
		return (-1);
	func1(str);
	if (str)
	{
		//      do something;   // if condition to check whether str is freed
		str = "42 Barcelona";
		printf("%s\n", str);
	}
	return (strlen(str));
}
