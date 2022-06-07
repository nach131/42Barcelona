/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:14:26 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/07 21:07:09 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include"libft.h"

char	**ft_split(char const *s, char c)
{
  	char	**words;
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
	return (words);
}

int	main(void)
{
	char	str[]="42 Barcelona is the best";
	char	ch;
	ch = ' ';
	ft_split(str, ch);

	printf("main: %c, ascii: %i\n", ch, ch);
}
