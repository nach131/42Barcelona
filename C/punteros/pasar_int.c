/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pasar_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:05:18 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/09/25 11:19:50 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_c(int *p)
{
	*p += 10;
	printf("\ten función %d\n", *p);
}
////=================== ASI NO !!!========================

// int	main(void)
// {
// 	int *ptr;

// 	*ptr = 20;
// 	printf("%d\n", *ptr);
// 	ft_c(ptr);
// }

////=================== OK========================
int main(){
	int variable;
	int *ptr = &variable;
	*ptr = 20;
	printf("Inicio %d\n", *ptr);
	ft_c(ptr);
	printf("Fin %d\n", *ptr);
}

////=================== OK========================
// int main(){
//    void *memory = malloc(sizeof(int));
//    int *ptr = (int *)memory;

//    *ptr = 2;
// 	 printf("inicio %d\n", *ptr);
// 	 ft_c(ptr);
// 	 printf("Fin %d\n", *ptr);
//    free(memory);
//    return 0;
// }
// inicio 2
// 	en función 12
// Fin 12

////=================== C OK========================

// int	main(void)
// {
// 	int n;
// 	int *nbr;

// 	n = 0;
// 	nbr = &n;
// 	printf("inicio %d\n", n);
// 	ft_c(nbr);
// 	printf("fin %d\n", n);
// 	return (0);
// }
////================ft_swap=======================

// void    ft_swap(int *a, int *b)
// {
//     int c;

//     c = *a;
//     *a = *b;
//     *b = c;

// }

// int main(void)
// {

//     int at, bt;
//     int *aa = &at;
//     int *bb = &bt;

//     *aa = 100;
//     *bb = 20;

//     ft_swap(aa, bb);

//     printf("aa: %p, bb: %p\n", &aa, &bb);
//     printf("aa: %d, bb: %d\n", *aa, *bb);

// }

////============================================
// inicio 0
// 	en función 10
// fin 10
