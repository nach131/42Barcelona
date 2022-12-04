/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:08:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/12/03 11:47:16 by nmota-bu         ###   ########.fr       */
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

int	main(void)
{
	t_list	*c;
	c = calloc(1, sizeof(t_list));
	int ci = 42;
	c->content = &ci;

	t_list *b;	
	b = calloc(1, sizeof(t_list));
	int bi = 84;
	b->content = &bi;
	b->next = c;

	t_list *cur;
	cur = b;

	while(cur)
	{
		printf("%i\n", *(int *)cur->content);
		cur = cur->next;
	}


}
