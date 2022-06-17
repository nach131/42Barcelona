/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:01:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/17 23:29:21 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*l_aux;

	if (lst)
	{
		while (*lst)
		{
			l_aux = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = l_aux;
		}
	}
}

//void	del(void *tmp)
//{
////    write(STDOUT_FILENO, "o", 1);
//    free(tmp);
////    write(STDOUT_FILENO, "k\n", 2);
//    printf("\e[3;31m✗ El elemento pasado ha sido borrado.\e[0m\n");
//}
//
//int main(int argc, char const *argv[])
//{
//	t_list *a;
//	t_list *b;
//	if (argc != 3)
//	{
//		printf("Escribir dos elemento de la lista como argumento.\n");
//		return (0);
//	}
//	a = ft_lstnew(ft_strdup(argv[1]));
//	b = ft_lstnew(ft_strdup(argv[2]));
//	ft_lstadd_back(&a, b);
//	printf("Primer elemento de la lista: \e[5;32m%s\e[0m\n", (char *)a->content);
//	printf("Segundo elemento de la lista: \e[5;32m%s\e[0m\n", (char *)a->next->content);
//	printf("--------------------------\n");
//	ft_lstclear(&a, del);
////	printf("%p\n", a);
////	printf("%p\n", &a);
//	return (0);
//}

//Primer elemento de la lista: 42 Barcelona
//Segundo elemento de la lista: 42 Malaga
//--------------------------
//✗ El elemento pasado ha sido borrado.
//✗ El elemento pasado ha sido borrado.





