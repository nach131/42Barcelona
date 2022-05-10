#include<stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	*str_1 = "Coucou\ntu ■■bie   n ¢¢¢¢ ?";
	char	*str_2 = "bb\vbgHHHc€€€€<' '&>'~'ej\tbveb";
	char	*str_3 = "";

	printf("------------------------------------\n");
	printf("TEST 1: %s \n", str_1);
	printf("Expected:\nCoucou\\0atu vas bien ?\n");
	printf("Obtained:\n");
	ft_putstr_non_printable(str_1);
	printf("\n------------------------------------\n");
	printf("TEST 2: %s \n", str_2);
	printf("Expected:\nbb\\0bbgHHHc€€€€<' '&>'~'ej\\09bveb\n");
    printf("Obtained:\n");
	ft_putstr_non_printable(str_2);
	printf("\n------------------------------------\n");
	printf("TEST 3: %s \n", str_3);
	ft_putstr_non_printable(str_3);
	printf("\n------------------------------------\n");
	return (0);
}
