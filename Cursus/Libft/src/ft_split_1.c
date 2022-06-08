/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:14:26 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/08 10:10:22 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include"libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	w;
	int len;

	len = strlen(s);
	i = 0;
	w = 1;
	while (i < len && s[i] != '\0')
	{
		if (s[i] == c)
			w++;
		i++;
	}
	return(w);
}

char	**ft_split(char const *s, char c)
{
  	char	**words;

	int	i;
	int	j;
	int z;
	int len;
	int	inicio;

	len = strlen(s);
	i = 0;
	z = 1;
	while (i < len && s[i] != '\0')
	{
		j = 0;
		printf("%i\n",i);
		if ( s[i] == c)
		{
//  			printf("\t%d\n",i);
			j = i;
			inicio=0;
			inicio = (inicio++  - z) ;
			z++;
			printf("\tj:%d len: %d\n",j,  (len - j));
			printf("\tword numero:  z:%d\n",z);
			printf("\tinicio: %d\n", inicio);
		}
		i++;
	}	
	//  
//    	words = (char **)malloc(2 * sizeof(*words));
//  	words[0] = "42";
//  	words[1] = "Barcelona";
//  	int	j;
//  	int i;
//  	i = 0;
//  	while (i < 2)
//  	{
//  		j = 0;
//  		while(*(words[i] + j) != '\0'){
//  			printf("%c", *(words[i] + j ));
//  			j++;
//  		}
//  		printf("\n");
//  		i++;
//  	}
//  
//  }

	return (words);
}

int	main(void)
{
	char	str[]="42 Barcelona is the best";
	char	ch;
	int		n_words;

	ch = ' ';
	n_words = count_words(str, ch);
	ft_split(str, ch);
	printf("words: %d", n_words);
	printf("main: %c, ascii: %i\n", ch, ch);
}
