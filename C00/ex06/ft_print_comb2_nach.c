#include <unistd.h>

void ft_putchar(char c)
{
write(1, &c ,1);
}

void ft_print_comb2(void)
{
int par_a;
int par_b;

par_a = -1;
	while(par_a++ < 98)
	{
par_b = par_a;
		while(par_b++ < 99) 
		{	
			ft_putchar('0' + par_a /10);
			ft_putchar('0' + par_a %10);
			ft_putchar(' ');
			ft_putchar('0' + par_b /10);
			ft_putchar('0' + par_b %10);
		if(par_a != 98)

		{ write(1, ", ", 2);
		}	
}
	
	}

	
}
