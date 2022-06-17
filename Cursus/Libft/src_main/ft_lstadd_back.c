/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:40:01 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/17 12:25:57 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *l_aux;

	if (!(*lst))
		*lst = new;
	else
	{
	l_aux = ft_lstlast(*lst);
	l_aux->next = new;
	}
}

void VerLista(t_list *lst)
{
	while (lst != NULL)
	{
		printf("\t%s\n", lst->content);
		if (lst != NULL)
			lst = lst->next;
	}	
}

int	main(void)
{
	t_list	*new_list;
	t_list	*new_item;

	new_list = ft_lstnew("42 Barcelona");
//	printf("nueva lista: %s\n", new_list->content);
	
	new_item->content = "42 Madrid";
	ft_lstadd_back(&new_list, new_item);

	VerLista(new_list);	
}
