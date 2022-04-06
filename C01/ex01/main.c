#include<stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	n;
	int *nbr_0 = &n;
   	int **nbr_1 = &nbr_0;
	int ***nbr_2 = &nbr_1;	
	int ****nbr_3 = &nbr_2;	
	int *****nbr_4 = &nbr_3;	
	int ******nbr_5 = &nbr_4;	
	int *******nbr_6 = &nbr_5;	
	int ********nbr_7 = &nbr_6;	
	int *********nbr_8 = &nbr_7;	

	n = 0;
	
	ft_ultimate_ft(nbr_8);
	if (n == 42)
		printf("Test passed! n = %d \n", n);
	else
		printf("Test failed :( n = %d \n", n);
	return (0);
}
