/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:01:31 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/17 21:39:12 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

//void	del(void *tmp)
//{
//	write(STDOUT_FILENO, "o", 1);
//	free(tmp);
//	write(STDOUT_FILENO, "k\n", 2);
//	printf("El elemento pasado ha sido borrado.\n");
//}
//int	main(int argc, char const *argv[])
//{
//	t_list	*l_aux;
//
//	if (argc != 2)
//	{
//		printf("Escribir un, solo elemento de la lista como argumento.\n");
//		return (0);
//	}
//	l_aux = ft_lstnew((void *)ft_strdup(argv[1]));
//	printf("%s\n", (char *)l_aux->content);
//	ft_lstdelone(l_aux, del);
//	return 0;
//}

