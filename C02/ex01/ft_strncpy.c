/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:32:56 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/11 22:32:56 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	indice;

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
