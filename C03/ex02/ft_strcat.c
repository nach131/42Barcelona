/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:37:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/15 11:45:17 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// while mientras des[indice_src] no sea null sumas indice_src
// while mientras src{indice_des] no sea null, colocas en des["la suma de las 
// dos arrays"] src[indice_dest] 
// AL SALIR DEL LOS WHILE 
// escribimos null '\0' en doto el destino

char	*ft_strcat(char *dest, char *src)
{
	int	indice_dest;
	int	indice_src;

	indice_dest = 0;
	indice_src = 0;
	while (dest[indice_src] != '\0')
		indice_src++;
	while (src[indice_dest] != '\0')
	{
		dest[indice_src + indice_dest] = src[indice_dest];
		indice_dest++;
	}
	dest[indice_src + indice_dest] = '\0';
	return (dest);
}
