/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:17:27 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/12 16:02:11 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ascii 65=A 90=Z
// +32 empieza las minusculas

char	*ft_strlowcase(char *str)
{
	int	indice;
	int	ascii;

	indice = 0;
	while (str[indice] != '\0')
	{
		ascii = (int)str[indice];
		if (ascii >= 65 && ascii <= 90)
		{
			str[indice] += 32;
		}
		indice++;
	}
	return (str);
}
