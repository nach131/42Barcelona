/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:46:23 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/20 00:11:32 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//	Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada elemento.
//	La aplicación correcta de la función ’f’ sobre cada elemento genera
//	una nueva lista con estos. La función ’del’ se utilizará para eliminar el
//	contenido de un elemento en caso de necesitarse.
//	#1. La dirección de un puntero a un elemento.
//	#2. La dirección a un puntero a función utilizada para iterar la lista.
//	#3. La dirección a un puntero a función utilizado
//		para eliminar el contenido de un elemento en caso de requerirse.

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l_aux;
	t_list	*elem;
	t_list	*list;

	list = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		l_aux = f(lst->content);
		elem = ft_lstnew(l_aux);
		if (!elem)
		{
			del(l_aux);
			ft_lstclear(&list, del);
			return (NULL);
		}
		else
		{
			ft_lstadd_back(&list, elem);
			lst = lst->next;
		}
	}	
	return (list);
}

//void	*f(void	*ptr)
//{
//	size_t	i = 0;
//	char	*str = ptr;
//	if (!ptr)
//		return (NULL);
//	while (str[i])
//	{
//		str[i] = ft_toupper(str[i]);
//		i++;
//	}
//	return ((void *)str);
//}
//void	del(void *tmp)
//{
//	free(tmp);
//}
//void	printLista(t_list *lst)
//{
//	while (lst)
//	{
//		printf("\e[5;32m\t%s\n\e[0m", lst->content);
//		lst = lst->next;
//	}
//}
//int main(int argc, char const *argv[])
//{
//	t_list	*a;
//	t_list	*b;
//	t_list	*c;
//	t_list	*res;
//	if (argc != 4)
//	{
//		printf("\e[4;31m3 elementos com Argumentos\n\e[0m");
//		return (0);
//	}
//	a = ft_lstnew(ft_strdup(argv[1]));
//	b = ft_lstnew(ft_strdup(argv[2]));
//	c = ft_lstnew(ft_strdup(argv[3]));
//	ft_lstadd_back(&a, b);
//	ft_lstadd_back(&a, c);
//	printf("\e[1;31mOriginal\n\e[0m");
//	printLista(a);
//	res = ft_lstmap(a, f, del);
//	printf("---------------------\n");
//	printf("\e[1;31mDespues de ft_lstmap\n\e[0m");
//	printLista(res);
//	return 0;
//}
