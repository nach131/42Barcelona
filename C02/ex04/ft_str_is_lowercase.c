/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:08:56 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/12 11:42:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ascii a=97 z=122 i
/*	
 * 
 *	if (str[indice] == 0) 
 *	{		
 *		return (1);
 *	}	
 *	while (str[indice] != '\0')
 *	{
 *	ascii = (int)str[indice]; asigno el numero ascii a ascii ;-)
 *	SI ES a-z devuelve 0	
 *		if ((ascii < 97 || ascii > 122))
 *		{	
 *			return (0);
 *		}
 *	indice++;
 *	}
 *	return (1);
*/

int	ft_str_is_lowercase(char *str)
{
	int	indice;
	int	ascii;

	indice = 0;
	if (str[indice] == 0)
	{		
		return (1);
	}	
	while (str[indice] != '\0')
	{
	ascii = (int)str[indice];
		if (ascii < 97 || ascii > 122)
		{	
			return (0);
		}
	indice++;
	}
	return (1);
}
