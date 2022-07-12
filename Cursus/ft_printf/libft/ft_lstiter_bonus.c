/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:24:16 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/20 00:11:10 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//	Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada elemento.
// 	#1. Un puntero al primer elemento de una lista.
//	#2. Un puntero a la función que se aplicará a cada
//		elemento de la lista.

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

//void imprimir(void *c)
//{
//	printf("%s\n", (char *)c);
//}
//int	main(void)
//{
//	t_list	*a;
//	t_list	*b;
//	t_list	*c;
//	a = ft_lstnew("42 Barcelona");
//	b = ft_lstnew("42 Malaga");
//	c = ft_lstnew("42 Madrid");
//	ft_lstadd_back(&a, b);
//	ft_lstadd_back(&a, c);
//	ft_lstiter(a, imprimir);
//	return (0);
//}
