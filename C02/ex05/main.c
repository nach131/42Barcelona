#include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str_1 = "HREHREHREJREJ";
	char	*str_2 = "bbebgHHHcejb&&&#$@veb";
	char	*str_3 = "";
	int		res_1;
	int		res_2;
	int		res_3;

	res_1 = ft_str_is_uppercase(str_1);
	res_2 = ft_str_is_uppercase(str_2);
	res_3 = ft_str_is_uppercase(str_3);

	printf("---------------------TEST 1--------------------\n");
	printf("%s \n", str_1);
	if (res_1 == 1)
		printf("Test passed! is_uppercase = %d \n", res_1);
	else
		printf("Test failed! Expected: 1 | Obtained: %d \n", res_1);
	printf("\n");

	printf("---------------------TEST 2--------------------\n");
	printf("%s \n", str_2);
	if (res_2 == 0)
		printf("Test passed! is_uppercase = %d \n", res_2);
	else
		printf("Test failed! Expected: 0 | Obtained: %d \n", res_2);
	printf("\n");

	printf("---------------------TEST 3--------------------\n");
	printf("%s \n", str_3);
	if (res_3 == 1)
		printf("Test passed! is_uppercase = %d \n", res_3);
	else
		printf("Test failed! Expected: 1 | Obtained: %d \n", res_3);
	printf("\n");
	return (0);
}
