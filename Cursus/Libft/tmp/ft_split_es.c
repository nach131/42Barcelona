/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:14:26 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/08 11:58:44 by nmota-bu         ###   ########.fr       */
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
	int		n_words;
	int		len_s;
	
	len_s = strlen(s);	
	n_words = count_words(s, c);
//	printf("n_words: %d\n",n_words);
   	words = (char **)malloc(n_words * sizeof(*words));
//    	words[0] = "42";
//    	words[1] = "Barcelona";
//    	words[2] = "tomate";
//    	int	j;
//    	int i;
//    	i = 0;
//    	while (i < n_words)
//    	{
//    		j = 0;
//    		while(*(words[i] + j) != '\0'){
//    			printf("%c", *(words[i] + j ));
//    			j++;
//    		}
//    		printf("\n");
//    		i++;
//    	}
	int	i;
	int j;
	
	i = 0;
	while (i < len_s && s[i] != '\0')
	{
		if (s[i] == c)
		{
			printf("i:%d\n",i);
		}

 //   			printf("i:%d\n",i);
		i++;
	}
  

	return (words);
}

int	main(void)
{
	char	str[]="42 Barcelona is the best";
	char	ch;
	char	**res;
	ch = ' ';

	res = ft_split(str, ch);
	printf("main: %c, ascii: %i\n", ch, ch);

//    	int	j;
//    	int i;
//  	i = 0;
//    	while (i < 3)
//    	{
//    		j = 0;
//    		while(*(res[i] + j) != '\0'){
//    			printf("%c", *(res[i] + j ));
//    			j++;
//    		}
//    		printf("\n");
//    		i++;
//    	}


}
