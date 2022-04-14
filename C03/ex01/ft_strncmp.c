/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:45:49 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/14 13:10:39 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int caracter;
	int diferencia;

	caracter = 0;
	diferencia = 0;
	
	while((caracter < n) && !diferencia && (s1[caracter] != '\0')
			&& (s2[caracter] = '\0'))	
	{
		diferencia = (unsigned char)s1[caracter] - (unsigned char)s2[caracter];
		caracter++;
	}
	if (caracter < n && !diferencia && (s1[caracter] == '\0'
				|| s2[caracter] == '\0'))
		diferencia = (unsigned char)s1[caracter] - (unsigned char)s2[caracter];
	return (diferencia);
}
