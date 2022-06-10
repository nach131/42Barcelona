/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrayStringPTR.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:40:38 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/07 16:19:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void	arrayBasico(void)
{
	char	str[5][10] = {
		"42",
		"Barcelona",
		"is",
		"the",
		"best"
	};
	int i;
	
	for(i = 0; i < 5; i++){
	printf("[index %d] Adress: %u, %s\n", i, str[i], str[i]);
	}
}
void	arrayPuntero(void)
{
	char	*str[5] = {
		"42",
		"Barcelona",
		"is",
		"the",
		"best"
	};
	int i;
	
	for(i = 0; i < 5; i++){
	printf("[index %d] Adress: %u, %s\n", i, str[i], str[i]);
	}
}
void arrayMalloc(void)
{
	char	**words;
	words = (char **)malloc(5 * sizeof(*words)); 	
	words[0] = "42";
	words[1] = "Barcelona";
	words[2] = "is";
	words[3] = "the";
	words[4] = "best";

	for (int i = 0; i < 5; i++) {
//  		printf("%s\n",words[i]);
  		printf("[index %d] Adress: %u, %p %s\n", i, words[i], words[i], words[i]);
	}
	free(words);
}


int	main(void)
{
	arrayBasico();
	printf("-------Puntero---------\n");
	arrayPuntero();
	printf("-----------Malloc------------\n");
	arrayMalloc();
}
//  [index 0] Adress: 3858049152, 42
//  [index 1] Adress: 3858049162, Barcelona
//  [index 2] Adress: 3858049172, is
//  [index 3] Adress: 3858049182, the
//  [index 4] Adress: 3858049192, best
//  -------Puntero---------
//  [index 0] Adress: 164290381, 42
//  [index 1] Adress: 164290384, Barcelona
//  [index 2] Adress: 164290394, is
//  [index 3] Adress: 164290397, the
//  [index 4] Adress: 164290401, best
//  -----------Malloc------------
//  [index 0] Adress: 164290381, 42
//  [index 1] Adress: 164290384, Barcelona
//  [index 2] Adress: 164290394, is
//  [index 3] Adress: 164290397, the
//  [index 4] Adress: 164290401, best
