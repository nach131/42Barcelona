/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
#include "libft.h"

/*
1.	The ft_split function takes two parameters: a string and a character.
2.	The ft_split function allocates memory for an array of strings.
3.	The ft_split function calls ft_countwordblocks to get the number of blocks of
	words.
4.	The ft_split function allocates memory for the array of strings.
5.	The ft_split function calls ft_split_words to split the string into an array
	of strings.
6.	The ft_split function returns the array of strings.
*/
/*
 * count blocks of words separated by c(s) returns n of blks found
 */
static size_t ft_countwordblocks(char const *s, char c)
{
	size_t blks;
	size_t word;

	blks = 0;
	word = 0;
	while (*s != '\0')
	{
		if (*s == c)
			word = 0;
		else if ((*s != c) && (word == 0))
		{
			//		printf("blks %zu\n",blks);
			word = 1;
			++blks;
		}
		++s;
	}
	return (blks);
}

/*
 * str len that returns if c is found or \0
 */
static size_t ft_strclen(const char *s, char c)
{
	size_t int_len;

	int_len = 0;
	while (s[int_len] != '\0' && s[int_len] != c)
		int_len++;
	printf("aki:%zu\n", int_len);
	return (int_len);
}

/*
 * Helper function: walking through s and calloc'ing and memcpy'ing the blocks
 * into the **arr. Due to calloc the \0 is there and we can use just memcpy.
 * [1,2]; 1=>"blck1\0" 2=>"blck2\0"
 */
static char **ft_split_words(char **arr, const char *s, const char c)
{
	int pos;
	int blk_len;

	pos = 0;
	while (*s)
	{
		// while (*s && *s == c)
		while (*s == c)
			s++;
		if (*s)
		{
			blk_len = ft_strclen(s, c);
			arr[pos] = (char *)ft_calloc(blk_len + 1, sizeof(char));
			if (!arr[pos])
				return (NULL);
			ft_memcpy(arr[pos], s, (size_t)blk_len);
			s += blk_len;
			pos++;
		}
	}
	return (arr);
}

/*
 * Allocates (with malloc(3)) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter. The array must be
 * ended by a NULL pointer. Returns The array of new strings resulting from the
 * split. NULL if the allocation fails.
 * Allowed functions: malloc, free
 * arr = [start,t1,t2,...,0]
 */
char **ft_split(char const *s, char c)
{
	char **arr;

	arr = (char **)ft_calloc(ft_countwordblocks(s, c) + 1, sizeof(char *));
	arr = ft_split_words(arr, s, c);
	return (arr);
}

int main(void)
{
	char str[] = "42 Barcelona is the best";
	char ch;
	char **res;
	ch = ' ';

	res = ft_split(str, ch);
	printf("main: %c, ascii: %i\n", ch, ch);

	int j;
	int i;
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (*(res[i] + j) != '\0')
		{
			printf("%c", *(res[i] + j));
			j++;
		}
		printf("\n");
		i++;
	}
}
