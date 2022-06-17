/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:40:01 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/17 23:48:43 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l_aux;

	if (!(*lst))
		*lst = new;
	else
	{
	l_aux = ft_lstlast(*lst);
	l_aux->next = new;
	}
}

//void VerLista(t_list *lst)
//{
//	while (lst != NULL)
//	{
//		printf("\t%s\n", lst->content);
////		if (lst != NULL)
//			lst = lst->next;
//	}	
//}
//
//int	main(void)
//{
//	t_list	*a;
//	t_list	*b;
//	t_list	*c;
//
//	a = ft_lstnew("42 Barcelona");
//	b = ft_lstnew("42 Madrid");
//	c = ft_lstnew("42 Malaga");
////	printf("nueva lista: %s\n", a->content);
//	ft_lstadd_back(&a, b);
//	ft_lstadd_front(&a, c);
//	VerLista(a);
//}
////
////	42 Malaga
////	42 Barcelona
////	42 Madrid
