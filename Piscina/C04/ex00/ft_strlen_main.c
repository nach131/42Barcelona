/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:29:09 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/17 17:29:12 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strlen(char *str)
{
	int indice;
	while(str[indice] !='\0')
	{
	indice++;
	}
	return(indice);
}



int main(void)
{
	char *str = "toma tomate";
	int tomate;

tomate = ft_strlen(str);
printf("son %d caracteres", tomate);

}
