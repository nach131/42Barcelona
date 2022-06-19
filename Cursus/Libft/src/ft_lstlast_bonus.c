/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:51:25 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/20 00:09:01 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//	Devuelve el último elemento de una lista.
//	#1. El principio de una lista.

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

//int main(void)
//{
//	t_list	*lista;
//	t_list	*item;
//	t_list	*res;
//
//	lista =	ft_lstnew("42 Barcelona");
////	printf("%s\n", lista->content);
//	item->content = "42 Madrid";
//	ft_lstadd_front(&lista, item);
//
//	res = ft_lstlast(lista);
//	printf("Ultimo elemnto de la lista: %s\n", res->content);
//}
