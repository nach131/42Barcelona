/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:14:26 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/08 19:18:12 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

int ft_count_words(char const *s, char c)
{
	int i;
	int w;
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
	return (w);
}

int ft_len_words(char const *s, char c)
{
	size_t len;
	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

char **ft_split(char const *s, char c)
{
	char **words;
	int n_words, i, len_word;

	n_words = ft_count_words(s, c);
	words = (char **)ft_calloc((n_words + 1), sizeof(*words));
	// words = (char **)malloc((n_words + 1) * sizeof(*words));

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len_word = ft_len_words(s, c);
			words[i] = (char *)ft_calloc((len_word + 1), sizeof(char));
			// words[i] = (char *)malloc((len_word + 1) * sizeof(char));
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

// 	res = ft_split(str, ch);
// 	printf("main: %c, ascii: %i\n", ch, ch);

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
