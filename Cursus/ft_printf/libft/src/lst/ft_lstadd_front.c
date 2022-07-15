/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:25:54 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/20 00:03:45 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
// Añade el elemento ’new’ al principio de la lista.
// #1. La dirección de un puntero al primer elemento de una lista.
// #2. La dirección de un puntero al elemento a añadir a la lista.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

//int main(void)
//{
//	t_list *toma;
//
//	toma = ft_lstnew("42 Barcelona");
//	printf("primer elemento de la lista: %s\n", toma->content);
//	ft_lstadd_front(&toma, toma); 
//	
//}
