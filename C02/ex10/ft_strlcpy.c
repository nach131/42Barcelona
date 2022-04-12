/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:28:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/12 21:28:15 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// while mientras src sea true Y indice < size - 1
// dest[indice] = src[indice]; asignamos el valor de src a dest

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	indice;
	unsigned int	src_size;

	indice = 0;
	src_size = 0;
	while (src[src_size])
	{
		src_size++;
	}
	if (size)
	{
		while (src[indice] && indice < (size - 1))
		{
		dest[indice] = src[indice];
		indice++;
		}
	dest[indice] = 0;
	}
	return (src_size);
}
