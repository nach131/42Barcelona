#include <unistd.h>
void ft_putchar(char c, char d,char u)
{
write(1, &c, 1);
write(1, &d, 1);
write(1, &u, 1);

}

void ft_print_comb(void)
{
char centenas;
char decenas;
char unidades;

	centenas = '0';
	while (centenas <= '7')
	{	
	decenas = centenas + 1;
		while(decenas <= '8')
		{
		unidades = decenas +1;
			while(unidades <= '9')
			{
			ft_putchar(centenas, decenas, unidades);
			write(1, ", ", 2);
			unidades++;
			}
		decenas++;
		}
	centenas++;
	}


}
