#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int indice;

	while (str[indice] != '\0')
	{
	ft_putchar(str[indice]);
	indice++;
	}
}

int main(void)
{
	char	*str= "Hola que ases";
	ft_putstr(str);
}
