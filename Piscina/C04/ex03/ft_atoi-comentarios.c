/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:09:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/18 15:20:26 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ascii 9 - 13 caracteres de control (tab horizontal...)

// La función atoi () se usa para convertir una cadena en un entero (int), y su prototipo es:
// int atoi (const char * str);
// atoi () escanea la cadena de parámetros, omite los caracteres en blanco anteriores (como espacios, sangría de tabulación, etc.), 
// no inicia la conversión hasta que encuentra un número o un signo, y luego encuentra un non-number
// O la conversión termina cuando la cadena termina ('\ 0'), y se devuelve el resultado.

// [Valor de retorno] Devuelve el entero convertido; si str no se puede convertir a int o str es una cadena vacía, se devolverá 0.

#include<stdio.h>
#include<unistd.h>

int cambiar(int menos, int numero)
{
	if (numero != 0)
		if (menos % 2 == 1)		
			if (numero != -2147483648)
				numero *= -1;	
	return (numero);
}

int ft_atoi(char *str)
{
	int i;
	int menos;
	int numero;

	i = 0;
	menos = 0;
	numero = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
		printf("whileOne %i:%d\n",str[i]);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			menos++;
		i++;
		printf("whileTwo %i: %d\n", str[i]);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numero = numero * 10 + str[i] - '0';
		i++;
		printf("numero: %d\n",numero);
	}
	numero = cambiar(menos, numero);
	return (numero);
}

int	main(void)
{
char	*str= "\t    ---+--+1234ab567";
char	*str1= "\t  --++42";
int resultado;
printf("----------INCIO TEST-----------\n");
resultado = ft_atoi(str);
printf("Entrada: %s\n", str);
printf("atoi: %d\n", resultado);
printf("------------Fin---------\n");
resultado = ft_atoi(str1);
printf("Entrada: %s\n", str1);
printf("atoi: %d\n", resultado);
}
