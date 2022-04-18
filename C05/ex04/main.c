#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	index;
	int	res;

	printf("-----------------------------------TEST 1--------------------------------------\n");
	index = -1;
	res = ft_fibonacci(index);
	printf("Testing: fib(%d)\n", index); 
	if (res == -1)
		printf("Test passed :D | fib(%d) returns %d\n", index, res);
	else
		printf("Test failed :S | fib(%d) returns %d, should return -1\n", index, res);
   	printf("--------------------------------------------------------------------------------\n");	

	printf("-----------------------------------TEST 2--------------------------------------\n");
	index = 0;
	res = ft_fibonacci(index);
	printf("Testing: fib(%d)\n", index); 
	if (res == 0)
		printf("Test passed :D | fib(%d) = %d\n", index, res);
	else
		printf("Test failed :S | fib(%d) != %d\n", index, res);
   	printf("--------------------------------------------------------------------------------\n");	

	printf("-----------------------------------TEST 3--------------------------------------\n");
	index = 10;
	res = ft_fibonacci(index);
	printf("Testing: fib(%d)\n", index); 
	if (res == 55)
		printf("Test passed :D | fib(%d) = %d\n", index, res);
	else
		printf("Test failed :S | fib(%d) != %d\n", index, res);
   	printf("--------------------------------------------------------------------------------\n");	
	return (0);
}
