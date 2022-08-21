/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charArrayPTR.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:40:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/07 12:22:32 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include<stdlib.h>

void	charPtr(char **str)
{
//  	for (int i = 0; i < 5; i++){
//  		printf("%s\n",str[i]);
//  	}
  	int j;
	for (int i = 0; i < 5; i++){
	j = 0;
	while (*(str[i] + j) != '\0'){
		printf("%c", *(str[i] + j));
		j++;
	}
  	printf(": size: %d\n", j);
	}
	
}

int	main(void)
{
	char	**words;

	words = (char **)malloc(5 *sizeof(*words));
	words[0] = "42";
	words[1] = "Barcelona";
	words[2] = "is";
	words[3] = "the";
	words[4] = "best";
	
	charPtr(words);
	printf("\n------main------\n");
	for (int i =  0; i < 5; i++){
		printf("%s ",words[i]);
	}
	printf("\n");
}
//  42: size: 2
//  Barcelona: size: 9
//  is: size: 2
//  the: size: 3
//  best: size: 4
//  
//  ------main------
//  42 Barcelona is the best
