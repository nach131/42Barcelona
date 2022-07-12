/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uno.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:34:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/11 19:47:25 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>

int main(void){

	int a;
	int b;

	a = 2;
	b = 2;

printf("--------if & else if-------\n");
	if (a == 0){
		printf("a = %d\n", a);
	} else if(a == b){
		printf("a == b\n");
	} else {
		printf("else\n");
	}

printf("--------ternario-------\n");

a == 0 ? printf("a = %d\n", a) 
	: a == b ? printf("a == b\n")
	: printf("else\n");

}