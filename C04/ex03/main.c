#include<stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	*str1 = "\t    ---+--+1234ab567";
	char	*str2 = "\f++++++++------+++aib56igr";
	char	*str3 = "42";
	char	*str4 = "  \n  -----+2147483648";
	char	*str5 = "";
	char	*str6 = "\t\v\r+-42whoisthemole?42";
	int		res;

	printf("-------------------------------------TEST 1----------------------------------------------\n");
	printf("Input: %s\n", str1);
	res = ft_atoi(str1);
	printf("Output: %d \n", res);
	if (res == -1234)
		printf("Test passed :D\n");
	else
		printf("Test failed :( | Expected: -1234 | Obtained: %d \n", res);
	printf("-----------------------------------------------------------------------------------------\n");

	printf("-------------------------------------TEST 2----------------------------------------------\n");
	printf("Input: %s\n", str2);
	res = ft_atoi(str2);
	printf("Output: %d \n", res);
	if (res == 0)
		printf("Test passed :D\n");
	else
		printf("Test failed :( | Expected: 0 | Obtained: %d \n", res);
	printf("-----------------------------------------------------------------------------------------\n");

	printf("-------------------------------------TEST 3----------------------------------------------\n");
	printf("Input: %s\n", str3);
	res = ft_atoi(str3);
	printf("Output: %d \n", res);
	if (res == 42)
		printf("Test passed :D\n");
	else
		printf("Test failed :( | Expected: 42 | Obtained: %d \n", res);
	printf("-----------------------------------------------------------------------------------------\n");

	printf("-------------------------------------TEST 4----------------------------------------------\n");
	printf("Input: %s\n", str4);
	res = ft_atoi(str4);
	printf("Output: %d \n", res);
	if (res == -2147483648)
		printf("Test passed :D\n");
	else
		printf("Test failed :( | Expected: -2147483648 | Obtained: %d \n", res);
	printf("-----------------------------------------------------------------------------------------\n");

	printf("-------------------------------------TEST 5----------------------------------------------\n");
	printf("Input: %s\n", str5);
	res = ft_atoi(str5);
	printf("Output: %d \n", res);
	if (res == 0)
		printf("Test passed :D\n");
	else
		printf("Test failed :( | Expected: 0 | Obtained: %d \n", res);
	printf("-----------------------------------------------------------------------------------------\n");

	printf("-------------------------------------TEST 6----------------------------------------------\n");
	printf("Input: %s\n", str6);
	res = ft_atoi(str6);
	printf("Output: %d \n", res);
	if (res == -42)
		printf("Test passed :D\n");
	else
		printf("Test failed :( | Expected: -42 | Obtained: %d \n", res);
	printf("-----------------------------------------------------------------------------------------\n");
	


	
	return (0);
}
