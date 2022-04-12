/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:41:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/12 19:41:23 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ascii A=65 Z=90 a=97 z=122 | 0=48 9=57
// Primer if diferente a 0-9 o A-Z o a-z
// Segundo if Todo por encima de a todo por debajo de z
// ATENCION quitado las {} de los if ya que son inecesarias 

void	ft_strlowcase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] >= 65 && str[indice] <= 90)
		{
		str[indice] = str[indice] + 32;
		}
		indice++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	indice;

	indice = 0;
	ft_strlowcase(str);
	while (str[indice])
	{
		if (! ((str[indice -1] >= 48 && str[indice -1] <= 57)
				|| (str[indice - 1] >= 65 && str[indice - 1] <= 90)
				|| (str[indice - 1] >= 97 && str[indice - 1] <= 122)))
			if (str[indice] >= 97 && str[indice] <= 122)
				str[indice] -= 32;
		indice++;
	}
	return (str);
}
