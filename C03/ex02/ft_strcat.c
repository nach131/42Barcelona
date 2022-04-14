/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:37:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/14 13:40:04 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{

	int longitud;
	int	indice;

	longitud = 0;
	indice = 0;
	while (dest[indice] != '\0')
		indice++;
	while (src[longitud] != '\0')
	{
		dest[indice + longitud] = src[longitud];
		longitud++;
	}
	dest[indice + longitud] = '\0';
	return (dest);
}
