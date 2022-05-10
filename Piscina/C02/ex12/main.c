void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	unsigned int	size;
	void	*addr;
	char	test[] = "Bonjour les amin ches\t\t\tc est fo u\ttout\tce qu on peut faire avec\t\t\tprint_memory\t\t\t\tlol\tlol\t \t";

	addr = &test;
	size = 0;
	while (test[size] != '\0')
		size++;
	ft_print_memory(addr, size);	
	return (0);
}
