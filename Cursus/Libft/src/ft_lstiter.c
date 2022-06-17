/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:24:16 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/17 23:40:45 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

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
