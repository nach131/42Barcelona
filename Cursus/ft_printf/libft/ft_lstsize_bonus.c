/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:00:45 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/20 00:08:41 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//	Cuenta el número de elemento de una lista.
//	#1. El principio de una lista.
//	Valor devuelto: Longitud de la lista.

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

//int	main(void)
//{
//	t_list *lista;
//	t_list *uno;
//	int		res;
//
//	lista = ft_lstnew("42 Barcelona");
////	printf("%s\n", lista->content);	
//
//	uno->content = "42 Madrid";
//	ft_lstadd_front(&lista, uno);
//
//	printf("Numero elementos de la lista %d\n",ft_lstsize(lista));
//}
//42 Madrid
//42 Barcelona
//Numero elementos de la lista 2
