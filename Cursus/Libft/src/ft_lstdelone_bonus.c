/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:01:31 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/20 00:10:18 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
//	Toma como parámetro un elemento y libera la memoria del contenido
//	del elemento utilizando la función ’del’ dada como parámetro,
//	por último libera el elemento. La memoria de ’next’ no debe liberarse.
//	#1. El elemento a liberar.
//	#2. La dirección de la función utilizada para eliminar el contenido.

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
//	printf("\e[3;31m✗ El elemento pasado ha sido borrado.\e[0m\n");
//}
//int	main(int argc, char const *argv[])
//{
//	t_list	*l_aux;
//
//	if (argc != 2)
//	{
//		printf("\e[4;33mEscribir un, elemento como argumento.\e[0m\n");
//		return (0);
//	}
//	l_aux = ft_lstnew((void *)ft_strdup(argv[1]));
//	printf("\e[5;32m ✓ \e[0m\e[1;34m%s\e[0m\n", (char *)l_aux->content);
//	ft_lstdelone(l_aux, del);
//	return 0;
//}
