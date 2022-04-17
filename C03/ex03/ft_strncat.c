/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_dos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:06:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/17 16:14:59 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// while mientras destino[indice_a] no sea null aumenta indice_a++
// while indice_b menor que nb AND src[indice_b] no se null
// add en *dest[indice_a + indice_b] sea src[indice_b]

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	indice_a;
	unsigned int	indice_b;

	indice_a = 0;
	indice_b = 0;
	while (dest[indice_a] != '\0')
		indice_a++;
	while (indice_b < nb && src[indice_b] != '\0')
	{
		dest[indice_a + indice_b] = src[indice_b];
		indice_b++;
	}
	dest[indice_a + indice_b] = '\0';
	return (dest);
}
