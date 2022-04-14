#include<stdio.h>
#include<string.h>

unsigned int	ft_strlcat(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1_test1_o = "a";
	char	s2_test1_o[100] = "b";
	char	*s1_test2_o = "c";
	char	s2_test2_o[100] = "aaabbbbbb";
	char	*s1_test3_o = "424242";
	char	s2_test3_o[100] = "aaaaaaa";
	char	*s1_test4_o = "nf84gb430b34hg0";
	char	s2_test4_o[100] = "";
	char	*s1_test5_o = "";
	char	s2_test5_o[100] = "";
	char	*s1_test6_o = "euvbuebv83 FB437BF34QB";
	char	s2_test6_o[100] = "f4743gttgg5 984h8 g898hg";
	char	*s1_test1_e = "a";
	char	s2_test1_e[100] = "b";
	char	*s1_test2_e = "c";
	char	s2_test2_e[100] = "aaabbbbbb";
	char	*s1_test3_e = "424242";
	char	s2_test3_e[100] = "aaaaaaa";
	char	*s1_test4_e = "nf84gb430b34hg0";
	char	s2_test4_e[100] = "";
	char	*s1_test5_e = "";
	char	s2_test5_e[100] = "";
	char	*s1_test6_e = "euvbuebv83 FB437BF34QB";
	char	s2_test6_e[100] = "f4743gttgg5 984h8 g898hg";
	unsigned int	n;
	unsigned int	len_obt;
	unsigned int	len_exp;
	
	printf("\n--------------------------TEST 1------------------------------\n");
	n = 10;
	printf("src: %s \n", s1_test1_e);
	printf("dest: %s \n", s2_test1_e);
	printf("n = %d \n", n);
	len_exp = strlcat(s2_test1_e, s1_test1_e, n);
	len_obt = ft_strlcat(s2_test1_o, s1_test1_o, n);
	printf("Expected dest: %s\n", s2_test1_e);
	printf("Obtained dest: %s\n", s2_test1_o);
	printf("Expected len: %d\n", len_exp);
	printf("Obtained len: %d\n", len_obt);

	printf("----------------------------------------------------------------\n");
	
	printf("\n--------------------------TEST 2------------------------------\n");
	n = 2;
	printf("src: %s \n", s1_test2_e);
	printf("dest: %s \n", s2_test2_e);
	printf("n = %d \n", n);
	len_exp = strlcat(s2_test2_e, s1_test2_e, n);
	len_obt = ft_strlcat(s2_test2_o, s1_test2_o, n);
	printf("Expected dest: %s\n", s2_test2_e);
	printf("Obtained dest: %s\n", s2_test2_o);
	printf("Expected len: %d\n", len_exp);
	printf("Obtained len: %d\n", len_obt);
	printf("----------------------------------------------------------------\n");

	printf("\n--------------------------TEST 3------------------------------\n");
	n = 0;
	printf("src: %s \n", s1_test3_o);
	printf("dest: %s \n", s2_test3_o);
	printf("n = %d \n", n);
	len_exp = strlcat(s2_test3_e, s1_test3_e, n);
	len_obt = ft_strlcat(s2_test3_o, s1_test3_o, n);
	printf("Expected dest: %s\n", s2_test3_e);
	printf("Obtained dest: %s\n", s2_test3_o);
	printf("Expected len: %d\n", len_exp);
	printf("Obtained len: %d\n", len_obt);

	printf("----------------------------------------------------------------\n");

	printf("\n--------------------------TEST 4------------------------------\n");
	n = 10;
	printf("src: %s \n", s1_test4_o);
	printf("dest: %s \n", s2_test4_o);
	printf("n = %d \n", n);
	len_exp = strlcat(s2_test4_e, s1_test4_e, n);
	len_obt = ft_strlcat(s2_test4_o, s1_test4_o, n);
	printf("Expected dest: %s\n", s2_test4_e);
	printf("Obtained dest: %s\n", s2_test4_o);
	printf("Expected len: %d\n", len_exp);
	printf("Obtained len: %d\n", len_obt);
	printf("----------------------------------------------------------------\n");
	
	printf("\n--------------------------TEST 5------------------------------\n");
	n = 5;
	printf("src: %s \n", s1_test5_o);
	printf("dest: %s \n", s2_test5_o);
	printf("n = %d \n", n);
	len_exp = strlcat(s2_test5_e, s1_test5_e, n);
	len_obt = ft_strlcat(s2_test5_o, s1_test5_o, n);
	printf("Expected dest: %s\n", s2_test5_e);
	printf("Obtained dest: %s\n", s2_test5_o);
	printf("Expected len: %d\n", len_exp);
	printf("Obtained len: %d\n", len_obt);
	printf("----------------------------------------------------------------\n");

	printf("\n--------------------------TEST 6------------------------------\n");
	n = 10;
	printf("src: %s \n", s1_test6_o);
	printf("dest: %s \n", s2_test6_o);
	printf("n = %d \n", n);
	len_exp = strlcat(s2_test6_e, s1_test6_e, n);
	len_obt =ft_strlcat(s2_test6_o, s1_test6_o, n);
	printf("Expected dest: %s\n", s2_test6_e);
	printf("Obtained dest: %s\n", s2_test6_o);
	printf("Expected len: %d\n", len_exp);
	printf("Obtained len: %d\n", len_obt);

	printf("----------------------------------------------------------------\n");
	return (0);
}
