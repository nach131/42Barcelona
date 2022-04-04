#include <unistd.h>

void	ft_print_comb(void)
{
	char	centenas;
	char	decenas;
	char	unidades;

	centenas = '0';
	while	(centenas <= '7')
	{
		decenas = centenas + 1;
		while ( decenas <= '8')
		{	
			unidades = centenas + 1;
			while(centenas <= '9')
			{
			write(1, &centenas, 1);	
			write(1, &decenas, 1);
			write(1, &unidades, 1);
			if	(!(centenas == '7' && decenas == '8' && unidades == '9'))
			write(1, ", ",2);
			unidades++;
			}
		decenas++;
		}
	centenas++;
	}	


}
