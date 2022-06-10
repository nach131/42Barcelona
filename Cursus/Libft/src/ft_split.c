/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2022/06/06 12:52:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/06 18:03:42 by nmota-bu         ###   ########.fr       */
=======
/*   Created: 2022/06/07 09:14:26 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/08 20:46:16 by nmota-bu         ###   ########.fr       */
>>>>>>> e82524fb9c7da551dbf65524813dda93404b2237
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

<<<<<<< HEAD
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



=======
#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	i;
	int	w;
	int	len;

	len = strlen(s);
	i = 0;
	w = 1;
	while (i < len && s[i] != '\0')
	{
		if (s[i] == c)
			w++;
		i++;
	}
	return (w);
}

int	ft_len_words(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		len_word;

	words = (char **)ft_calloc((ft_count_words(s, c)) + 1, sizeof(*words));
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len_word = ft_len_words(s, c);
			words[i] = (char *)ft_calloc((len_word + 1), sizeof(char));
			if (!words[i])
				return (NULL);
			ft_memcpy(words[i], s, (size_t)len_word);
			s += len_word;
			i++;
		}
	}
	return (words);
}

// int main(void)
// {
// 	char str[] = "42 Barcelona is the best";
// 	char ch;
// 	char **res;
// 	ch = ' ';
//
// 	res = ft_split(str, ch);
// 	printf("main: %c, ascii: %i\n", ch, ch);
//
// 	int j;
// 	int i;
// 	i = 0;
// 	while (i < 5)
// 	{
// 		j = 0;
// 		while (*(res[i] + j) != '\0')
// 		{
// 			printf("%c", *(res[i] + j));
// 			j++;
// 		}
// 		printf("\n");
// 		i++;
// 	}
// }
>>>>>>> e82524fb9c7da551dbf65524813dda93404b2237
