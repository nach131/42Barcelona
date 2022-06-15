/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 20:06:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/15 21:36:08 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)ft_calloc(sizeof(t_list),1);
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

//	new = (t_list *)malloc(sizeof(t_list));
//int main(void)
//{
//	t_list *nuevo;
//	nuevo = ft_lstnew("42 Barcelona");
//	printf("el nuevo nodo creado es: %s\n", nuevo->content);
//}
