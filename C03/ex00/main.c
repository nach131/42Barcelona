#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1_test1 = "a";
	char	*s2_test1 = "b";
	char	*s1_test2 = "a";
	char	*s2_test2 = "aa";
	char	*s1_test3 = "aa";
	char	*s2_test3 = "a";
	char	*s1_test4 = "nf84gb430b34hg0";
	char	*s2_test4 = "nf84gb430b34hg0";
	char	*s1_test5 = "";
	char	*s2_test5 = "ievbwvbew";
	char	*s1_test6 = "euvbuebv83 FB437BF34QB";
	char	*s2_test6 = "f4743gttgg5 984h8 g898hg";
	int		cmp_obt;
	int 	cmp_exp;
	printf("\n--------------------------TEST 1---------------------------------\n");
	printf("s1: %s \n", s1_test1);
	printf("s2: %s \n", s2_test1);
	cmp_exp = strcmp(s1_test1, s2_test1);
	cmp_obt = ft_strcmp(s1_test1, s2_test1);
	if (cmp_exp == cmp_obt)
		printf("Test passed :D | strcmp = %d | ft_strcmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");

	printf("\n--------------------------TEST 2---------------------------------\n");
	printf("s1: %s \n", s1_test2);
	printf("s2: %s \n", s2_test2);
	cmp_exp = strcmp(s1_test2, s2_test2);
	cmp_obt = ft_strcmp(s1_test2, s2_test2);
	if (cmp_exp == cmp_obt || cmp_obt == -1)
		printf("Test passed :D | strcmp = %d | ft_strcmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");

	printf("\n--------------------------TEST 3---------------------------------\n");
	printf("s1: %s \n", s1_test3);
	printf("s2: %s \n", s2_test3);
	cmp_exp = strcmp(s1_test3, s2_test3);
	cmp_obt = ft_strcmp(s1_test3, s2_test3);
	if (cmp_exp == cmp_obt || cmp_obt == 1) 
		printf("Test passed :D | strcmp = %d | ft_strcmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");

	printf("\n--------------------------TEST 4---------------------------------\n");
	printf("s1: %s \n", s1_test4);
	printf("s2: %s \n", s2_test4);
	cmp_exp = strcmp(s1_test4, s2_test4);
	cmp_obt = ft_strcmp(s1_test4, s2_test4);
	if (cmp_exp == cmp_obt) 
		printf("Test passed :D | strcmp = %d | ft_strcmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");

	printf("\n--------------------------TEST 5----------------------------------\n");
	printf("s1: %s \n", s1_test5);
	printf("s2: %s \n", s2_test5);
	cmp_exp = strcmp(s1_test5, s2_test5);
	cmp_obt = ft_strcmp(s1_test5, s2_test5);
	if (cmp_exp == cmp_obt || cmp_obt == -1)
		printf("Test passed :D | strcmp = %d | ft_strcmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");

	printf("\n--------------------------TEST 6---------------------------------\n");
	printf("s1: %s \n", s1_test6);
	printf("s2: %s \n", s2_test6);
	cmp_exp = strcmp(s1_test6, s2_test6);
	cmp_obt = ft_strcmp(s1_test6, s2_test6);
	if (cmp_exp == cmp_obt)
		printf("Test passed :D | strcmp = %d | ft_strcmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");
	return (0);
}
