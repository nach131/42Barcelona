/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:45:49 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/14 14:57:13 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* while mientras caracter sea menor que "n", ADN diferencia de "diferente"
 * AND la posicion s1[caracter] no sea null '\0' AND s2[caracter] no se
 * null '\0' 
 *asgignar a diferencia s1[caracter] - s2[caracter]
 *
 *SI caracter menor n AND diferente a diferencia AND s1[caracter] es null
 * OR s2[caracter] igual a null 
 *
 * */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	caracter;
	int				diferencia;

	caracter = 0;
	diferencia = 0;
	while ((caracter < n) && !diferencia && (s1[caracter] != '\0')
		&& (s2[caracter] != '\0'))
	{
		diferencia = (unsigned char)s1[caracter] - (unsigned char)s2[:caracter];
		caracter++;
	}
	if (caracter < n && !diferencia && (s1[caracter] == '\0'
			|| s2[caracter] == '\0'))
		diferencia = (unsigned char)s1[caracter] - (unsigned char)s2[caracter];
	return (diferencia);
}
