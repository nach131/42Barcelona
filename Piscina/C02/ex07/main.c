#include<stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str_1[] = "HdfjnRgrmgmElmgr!@#$grlmgr%^&*()";
	char	str_2[] = "bbebgHHHcejibveb";
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
	res_1 = ft_strupcase(res_1);
	res_2 = ft_strupcase(res_2);
	res_3 = ft_strupcase(res_3);
	printf("Output strings: \n");
	printf("TEST 1: %s \n", res_1);
	printf("TEST 2: %s \n", res_2);
	printf("TEST 3: %s \n", res_3);
	return (0);
}
