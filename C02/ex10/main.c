#include<string.h>
#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src0_test[] = "Testing";
	char	src0[] = "Testing";
	char	buf0[10] = "4242424242";
	char	ref0[10] = "4242424242";
	unsigned int	len_buf0;
	unsigned int	len_ref0;	
	printf("src: %s \n", src0);

	len_buf0 = ft_strlcpy(buf0, src0, sizeof(buf0));
	len_ref0 = strlcpy(ref0, src0_test, sizeof(ref0));
	if (len_buf0 == len_ref0)
	{
		printf("Test passed! \n");
		printf("Expected length: %d \n", len_ref0);
	   	printf("Obtained length: %d \n", len_buf0);	
		
	}
	else
	{
		printf("Test failed :( \n");
		printf("Expected: %d \n", len_ref0);
		printf("Obtained: %d \n", len_buf0);
	}
	printf("Expected copied string: %s \n", ref0);
	printf("Obtained copied string: %s \n", buf0);
	return (0);
}
