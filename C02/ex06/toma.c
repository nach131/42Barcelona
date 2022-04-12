
int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 1;
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			str++;
		else
			return (0);
	}
	return (is_printable);
}
