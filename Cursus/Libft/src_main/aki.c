/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*s;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int main(void)
{
	char str[20] = "la frase";
	ft_memset(str, '@', sizeof(str));
	printf("main: %s\n", str);
}


