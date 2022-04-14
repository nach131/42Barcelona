#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *s1, char *s2);

int	main(void)
{
	char	*s1_test1_o = "Foo Bar Baz";
	char	*s2_test1_o = "Bar";
	char	*s1_test2_o = "Foo Bar Baz";
	char	*s2_test2_o = "";
	char	*s1_test3_o = "Foo Bar Baz";
	char	*s2_test3_o = "Barz";
	char	*s1_test4_o = "Foo";
	char	*s2_test4_o = "Barz";
	char	*s1_test1_e = "Foo Bar Baz";
	char	*s2_test1_e = "Bar";
	char	*s1_test2_e = "Foo Bar Baz";
	char	*s2_test2_e = "";
	char	*s1_test3_e = "Foo Bar Baz";
	char	*s2_test3_e = "Barz";
	char	*s1_test4_e = "Foo";
	char	*s2_test4_e = "Barz";
	char	*test1_o;
	char    *test2_o;
	char    *test3_o;
	char	*test4_o;
	char    *test1_e;
	char    *test2_e;
	char    *test3_e;
	char	*test4_e;
	
	printf("\n--------------------------TEST 1------------------------------\n");
	printf("str: %s \n", s1_test1_e);
	printf("to_find: %s \n", s2_test1_e);
	test1_e = strstr(s1_test1_e, s2_test1_e);
	test1_o = ft_strstr(s1_test1_o, s2_test1_o);
	printf("Expected str: %s\n", test1_e);
	printf("Obtained str: %s\n", test1_o);
	printf("----------------------------------------------------------------\n");
	
	printf("\n--------------------------TEST 2------------------------------\n");
	printf("str: %s \n", s1_test2_e);
	printf("to_find: %s \n", s2_test2_e);
	test2_e = strstr(s1_test2_e, s2_test2_e);
	test2_o = ft_strstr(s1_test2_o, s2_test2_o);
	printf("Expected str: %s\n", test2_e);
	printf("Obtained str: %s\n", test2_o);
	printf("----------------------------------------------------------------\n");

	printf("\n--------------------------TEST 3------------------------------\n");
	printf("str: %s \n", s1_test3_o);
	printf("to_find: %s \n", s2_test3_o);
	test3_e = strstr(s1_test3_e, s2_test3_e);
	test3_o = ft_strstr(s1_test3_o, s2_test3_o);
	printf("Expected str: %s\n", test3_e);
	printf("Obtained str: %s\n", test3_o);
	printf("----------------------------------------------------------------\n");
	
	printf("\n--------------------------TEST 4------------------------------\n");
	printf("str: %s \n", s1_test4_e);
	printf("to_find: %s \n", s2_test4_e);
	test4_e = strstr(s1_test4_e, s2_test4_e);
	test4_o = ft_strstr(s1_test4_o, s2_test4_o);
	printf("Expected str: %s\n", test4_e);
	printf("Obtained str: %s\n", test4_o);
	printf("----------------------------------------------------------------\n");
	

	return (0);
}
