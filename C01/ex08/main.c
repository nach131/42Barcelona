#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {2147483647, 2, 0, -5999, -2147483648};
	int tab_1[11] = {-347924, 3374, 0, 0, 7, 8, 39840, 1000, 1000, 7307, -1};
	int tab_2[1] = {42};
	int size = 5;
	int	i = 0;
	
	printf("\n");
	printf("-------------------------TEST 1------------------------\n");
	printf("Input:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab[i]);
		else
			printf("%d", tab[i]);
		i++;
	}
	printf("]");
	printf("\n");

	ft_sort_int_tab(tab, size);
	
	i = 0;
	printf("Output:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab[i]);
		else
			printf("%d", tab[i]);
		i++;
	}
	printf("]");
	printf("\n");

	size = 11;
	i = 0;
	printf("\n");
	printf("-------------------------TEST 2------------------------\n");
	printf("Input:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab_1[i]);
		else
			printf("%d", tab_1[i]);
		i++;
	}
	printf("]");
	printf("\n");

	ft_sort_int_tab(tab_1, size);
	
	i = 0;
	printf("Output:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab_1[i]);
		else
			printf("%d", tab_1[i]);
		i++;
	}
	printf("]");
	printf("\n");

	size = 1;
	i = 0;
	printf("\n");
	printf("-------------------------TEST 3------------------------\n");
	printf("Input:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab_2[i]);
		else
			printf("%d", tab_2[i]);
		i++;
	}
	printf("]");
	printf("\n");

	ft_sort_int_tab(tab_2, size);
	
	i = 0;
	printf("Output:\t");
	printf("[");
	while (i < size)
	{
		if (i != (size - 1))
			printf("%d, ", tab_2[i]);
		else
			printf("%d", tab_2[i]);
		i++;
	}
	printf("]");
	printf("\n");

	return (0);
}
