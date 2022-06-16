/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:51:25 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/16 23:01:20 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
//	while (lst != NULL)
//	{
//		printf("\t%s\n", lst->content); // listado de los elementos
//		lst = lst->next;
//	}
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	printf("Primer elemento: %s\n", lst->content);
//	printf("Ultimo elemento: %s\n", nAux->content);

	return(lst);
}

int main(void)
{
	t_list	*lista;
	t_list	*item;
	t_list	*res;

	lista =	ft_lstnew("42 Barcelona");
//	printf("%s\n", lista->content);
	item->content = "42 Madrid";
	ft_lstadd_front(&lista, item);

	res = ft_lstlast(lista);
	printf("Ultimo elemnto de la lista: %s\n", res->content);
}
