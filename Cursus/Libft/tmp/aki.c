/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../src/libft.h"

static char	**free_error(char **words)
{
	size_t	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

static size_t	count_arrays(char	const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

static size_t	nextstrlen(char const *s, char c, size_t j)
{
	size_t	str_len;

	str_len = 0;
	while (s[j] == c && s[j] != '\0')
		j++;
	while (s[j] != c && s[j] != '\0')
	{
		j++;
		str_len++;
	}
	return (str_len);
}

static char	**ft_result(char const *s, char c, char **dst, size_t dbl_array)
{
	size_t	i;
	size_t	current_len;
	size_t	strlen;

	i = 0;
	current_len = 0;
	while (i < dbl_array)
	{
		strlen = nextstrlen(s, c, current_len);
		while (s[current_len] == c && s[current_len] != '\0')
			current_len++;
		dst[i] = ft_substr(s, current_len, strlen);
		if (!dst[i])
			return (free_error(dst));
		current_len = current_len + strlen;
		i++;
	}
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	size_t	double_array;
	char	**dst;

	if (!s)
		return (NULL);
	double_array = count_arrays(s, c);
	dst = ft_calloc((double_array + 1), sizeof(char *));
	if (!dst)
		return (NULL);
	return (ft_result(s, c, dst, double_array));
}

int main(void)
{
	char **s0 = ft_split("aaxaxxa", 'x');
	printf("aa a a (null) : %s %s %s %s\n", s0[0], s0[1], s0[2], s0[3]);
	// int	i = 0;
	// while (s0[i])
	// {
	// 	free(s0[i]);
	// 	i++;
	// }
	// free(s0);
	char **s1 = ft_split("aaaXbbbXccc", 'X');
	printf("aaa bbb ccc (null): %s %s %s %s\n", s1[0], s1[1], s1[2], s1[3]);
	char **s2 = ft_split("      ", ' ');
	printf("(null) : %s\n", s2[0]);
	int i = 0;
	char **t = ft_split("      split       this for   me  !       ", ' ');
	while (t[i] != 0)
	{
		printf("t[%d] = %s\n",i , t[i]);
		i++;
	}
	return (0);
}
 
