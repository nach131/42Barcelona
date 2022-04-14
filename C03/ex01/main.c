#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1_test1 = "a";
	char	*s2_test1 = "b";
	char	*s1_test2 = "aaaaaaa";
	char	*s2_test2 = "aaabbbbbb";
	char	*s1_test3 = "aaabbbbbb";
	char	*s2_test3 = "aaaaaaa";
	char	*s1_test4 = "nf84gb430b34hg0";
	char	*s2_test4 = "nf84gb430b34hg0";
	char	*s1_test5 = "";
	char	*s2_test5 = "ievbwvbew";
	char	*s1_test6 = "euvbuebv83 FB437BF34QB";
	char	*s2_test6 = "f4743gttgg5 984h8 g898hg";
	int		cmp_obt;
	int 	cmp_exp;
	unsigned int	n;

	n = 3;
	printf("\n--------------------------TEST 1------------------------------\n");
	printf("s1: %s \n", s1_test1);
	printf("s2: %s \n", s2_test1);
	printf("n = %d \n", n); 
	cmp_exp = strncmp(s1_test1, s2_test1, n);
	cmp_obt = ft_strncmp(s1_test1, s2_test1, n);
	if (cmp_exp == cmp_obt)
		printf("Test passed :D | strncmp = %d | ft_strncmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");
	
	n = 0;
	printf("\n--------------------------TEST 2------------------------------\n");
	printf("s1: %s \n", s1_test2);
	printf("s2: %s \n", s2_test2);
	printf("n = %d \n", n);
	cmp_exp = strncmp(s1_test2, s2_test2, n);
	cmp_obt = ft_strncmp(s1_test2, s2_test2, n);
	if (cmp_exp == cmp_obt)
		printf("Test passed :D | strncmp = %d | ft_strncmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");

	n = 5;
	printf("\n--------------------------TEST 3------------------------------\n");
	printf("s1: %s \n", s1_test3);
	printf("s2: %s \n", s2_test3);
	printf("n = %d \n", n);
	cmp_exp = strncmp(s1_test3, s2_test3, n);
	cmp_obt = ft_strncmp(s1_test3, s2_test3, n);
	if (cmp_exp == cmp_obt)
		printf("Test passed :D | strncmp = %d | ft_strncmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");

	n = 40;
	printf("\n--------------------------TEST 4------------------------------\n");
	printf("s1: %s \n", s1_test4);
	printf("s2: %s \n", s2_test4);
	printf("n = %d \n", n);
	cmp_exp = strncmp(s1_test4, s2_test4, n);
	cmp_obt = ft_strncmp(s1_test4, s2_test4, n);
	if (cmp_exp == cmp_obt)
		printf("Test passed :D | strncmp = %d | ft_strncmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");
	
	n = 50;
	printf("\n--------------------------TEST 5------------------------------\n");
	printf("s1: %s \n", s1_test5);
	printf("s2: %s \n", s2_test5);
	printf("n = %d \n", n);
	cmp_exp = strncmp(s1_test5, s2_test5, n);
	cmp_obt = ft_strncmp(s1_test5, s2_test5, n);
	if (cmp_exp == cmp_obt || cmp_obt == -1)
		printf("Test passed :D | strncmp = %d | ft_strncmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");

	n = 5;
	printf("\n--------------------------TEST 6------------------------------\n");
	printf("s1: %s \n", s1_test6);
	printf("s2: %s \n", s2_test6);
	printf("n = %d \n", n);
	cmp_exp = strncmp(s1_test6, s2_test6, n);
	cmp_obt = ft_strncmp(s1_test6, s2_test6, n);
	if (cmp_exp == cmp_obt)
		printf("Test passed :D | strncmp = %d | ft_strncmp = %d \n", cmp_exp, cmp_obt);
	else
		printf("Test failed :S | Expected: %d | Obtained: %d \n", cmp_exp, cmp_obt);
	printf("----------------------------------------------------------------\n");
	return (0);
}
