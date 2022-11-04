/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tipos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:49:08 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/11/04 10:58:45 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

int main(void)
{
	printf("<char> %zd bytes\n", sizeof(char));
	printf("<short> %zd bytes\n", sizeof(short));
	printf("<int> %zd bytes\n", sizeof(int));
	printf("<float> %zd bytes\n", sizeof(float));
	printf("<long> %zd bytes\n", sizeof(long));
	printf("<long long> %zd bytes\n", sizeof(long long));
	printf("<double> %zd bytes\n", sizeof(double));
	printf("<long double> %zd bytes\n", sizeof(long double));
	printf("<struct> %zd bytes\n", sizeof(t_list));
}
