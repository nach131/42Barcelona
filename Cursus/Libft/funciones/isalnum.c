/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:40:36 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/12 13:42:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <ctype.h>

int	main(){
	int i;
	i = 'W';
	printf("Resultado isalnum de %c: %d\n",i, isalnum(i));
	i = '5';
	printf("Resultado isalnum de %c: %d\n",i, isalnum(i));
	i = '@';
	printf("Resultado isalnum de %c: %d\n",i, isalnum(i));

}

