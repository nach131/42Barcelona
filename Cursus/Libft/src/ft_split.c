/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:52:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/06 18:03:42 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include"libft.h"

char	**ft_split(char const *s, char c)
{	
	char	**words;

	words = (char **)malloc(5 * sizeof(*words));
	words[0] = "42";
	words[1] = "Barcelona";
	words[2] = "is";
	words[3] = "the";
	words[4] = "best";

	char	new[] = "88";
	char	*res = strdup(new);
//	printf("res: %s\n", res);
	words[4] = res;

	for (int i; i < 5; i++){
		printf("%s\n", words[i]);
	}
	free(words);


	return (words);
}


int	main(void)
{
	char	str[] = "42 Barcelona is the best";
	char	c = ' ';
	
	ft_split(str, c);


	printf("str: %s\nchar: '%c', ascii: %i\n", str, c, c);

}

// memcpy --> copia n caracteres desde desde un area de memoria a otro
//



