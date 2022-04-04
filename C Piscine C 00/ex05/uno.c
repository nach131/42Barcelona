#include <unistd.h>
void show(char c)
{
write(1, &c, 1);
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
			show(centenas);
			show(decenas);
			show(unidades);
			show(',');
			show(' ');
			unidades++;
			}
		decenas++;
		}
	centenas++;
	}


}
