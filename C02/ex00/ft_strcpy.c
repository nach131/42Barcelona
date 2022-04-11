/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 20:34:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/11 20:36:06 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char	*ft_strcpy(char *dest, char *src)
{
	int	indice;

	indice = 0;
	while (src[indice] != '\0') // mientras exista un valor en la celda de la array
	{
		dest[indice] = src[indice]; // copia el valor del original a destino
		indice++; 
	}
	dest[indice] = '\0'; // vaciamos la celda del destino
	return (dest); // devolvemos todo el destino
}
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	indice;

	indice = 0;
	while (src[indice] != '\0')
	{
		dest[indice] = src[indice];
		indice++;
	}
	dest[indice] = '\0';
	return (dest);
}
