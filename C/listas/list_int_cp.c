/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_int_cp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:08:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/12/03 12:19:35 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	sum_lst(t_list *cur)
{
	int sum = 0;
	t_list *new = cur;

	while(new)
	{
		sum += *(int*)new->content;
		new = new->next;
	}
	return (sum);
}

int	main(void)
{
	t_list	*c;
	c = calloc(1, sizeof(t_list));
	int ci = 2;
	c->content = &ci;

	t_list *b;	
	b = calloc(1, sizeof(t_list));
	int bi = 8;
	b->content = &bi;
	b->next = c;

	t_list *cur;
	cur = b;

	while(cur)
	{
		printf("%i\n", *(int *)cur->content);
		cur = cur->next;
	}
	printf("sum: %d\n", sum_lst(&(*b)));
}
