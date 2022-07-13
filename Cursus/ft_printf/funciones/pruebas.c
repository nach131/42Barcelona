/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:57:50 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/13 17:28:27 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>

int main(void){
	int	ancho = 12;
	int valor = 42;
	float pi =	3.1415926535;
	char *s = "42 Barcelona is the Best";
	char ch = 'Z';

	printf("%07d\n", valor);		/*0000042*/
	printf("%s\n", s);				/*42 Barcelona is the Best*/
	printf("%c\n", ch);				/*Z*/
	printf("%.2f\n", pi);			/*3.14*/
	printf("42%%\n");				/*42%*/

	printf("%*d\n", ancho, valor);	 /*          42*/ 
	printf("%-8dBarcelna\n", valor); /*42      Barcelna*/
	printf("%7.3f\n", pi);			/*  3.142*/

	printf("%hhd\n", ch);			/*90 <-- ASCII code de Z */
}
