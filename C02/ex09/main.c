#include<stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str_1[] = "salUt, CoMMent tu vas ? 42Mots quarante-deuX; cinquante+et+un";

	char	str_2[] = "&&yes 5325no  7583no407no+yes-yes ,yes";
	char	str_3[] = "";
	char	*res_1;
	char	*res_2;
	char	*res_3;

	printf("Input strings: \n");
	printf("TEST 1: %s \n", str_1);
	printf("TEST 2: %s \n", str_2);
	printf("TEST 3: %s \n", str_3);
	printf("\n");
	res_1 = str_1;
	res_2 = str_2;
	res_3 = str_3;
	res_1 = ft_strcapitalize(res_1);
	res_2 = ft_strcapitalize(res_2);
	res_3 = ft_strcapitalize(res_3);
	printf("Output strings: \n");
	printf("TEST 1: %s \n", res_1);
	printf("TEST 2: %s \n", res_2);
	printf("TEST 3: %s \n", res_3);
	return (0);
}
