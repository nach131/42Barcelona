#include<string.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src = "Copy this string";
	char	dest[17];
	char	dest_test[17];
	int	i;
	int	len;
	int len_test;

	i = 0;
	len = 0;
	len_test = 0;
	strcpy(dest_test,src);
	ft_strcpy(dest, src);
	printf("-----------------------------------------------------------------------------------------\n");
	printf("Expected:\t");
	while (i < 17)
	{
		printf("%c", dest_test[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("Obtained:\t");
	while (i < 17)
	{
		printf("%c", dest[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (dest[len] != 0)
		len++;
	while (dest_test[len_test] != 0)
		len_test++;
	if (len == len_test)
		printf("Test passed :D | Length of obtained string (%d) matches length of expected string (%d). \n", len, len_test);
	else
		printf("Test failed :( | Length of obtained string (%d) does not match length of expected string (%d) \n", len, len_test);
	printf("-----------------------------------------------------------------------------------------\n");
	return (0);
}
