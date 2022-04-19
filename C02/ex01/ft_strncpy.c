/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:32:56 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 22:02:04 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

/*
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	indice; // declaracion de indice como unsigned

	indice = 0;
while (src[indice] && indice < n) mientras la celda "numero" indice > n pasada
	{
	dest[indice] = src[indice]; // copias la celda inice a la celda destino
		indice++;
	}
	while (indice < n) mientras indice sea >
	{
		dest[indice] = 0; poneas a cero la celda destino
		indice++;
	}
	return (dest);
}*/
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int indice;

	indice = 0;
	while (src[indice] && indice < n)
	{
		dest[indice] = src[indice];
		indice++;
	}
	while (indice < n)
	{
		dest[indice] = 0;
		indice++;
	}
	return (dest);
}
