/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:07:00 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/12/23 13:55:24 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// https://clibre.io/blog/por-secciones/codigo/item/424-calcular-tamano-en-c-sizeof-strlen-uso-y-errores-comunes

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;

void ft_print_lst(t_list *lst)
{
	while (lst)
	{
		printf("%i\n", *(int *)lst->data);
		lst = lst->next;
	}
}

int main(void)
{
	printf("<struct> t_list %zd bytes\n", sizeof(t_list));

	t_list *c = calloc(1, sizeof(t_list));
	int n_c = 12;
	c->data = &n_c;

	t_list *b = calloc(1, sizeof(t_list));
	b->next = c;
	int n_b = 6;
	b->data = &n_b;

	t_list *a = calloc(1, sizeof(t_list));
	a->next = b;
	int n_a = 42;
	a->data = &n_a;

	t_list *cur = a;
	printf("<struct> list c %zd bytes\n", sizeof(c));
	printf("<struct> list cur %zd bytes\n", sizeof(cur));

	ft_print_lst(cur);
	return (0);
}

// <struct> t_list 16 bytes
// <struct> list c 8 bytes
// <struct> list cur 8 bytes
// 42
// 6
// 12
