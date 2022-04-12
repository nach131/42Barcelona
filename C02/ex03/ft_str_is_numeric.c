/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:08:56 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/12 11:36:13 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ascii 0=48 9=57 
/*	
 * 
 *	if (str[indice] == 0) 
 *	{		
 *		return (1);
 *	}	
 *	while (str[indice] != '\0')
 *	{
 *	ascii = (int)str[indice]; asigno el numero ascii a ascii ;-)
 *	SI ES 0-9 devuelve 0	
 *		if ((ascii < 48 || ascii > 57))
 *		{	
 *			return (0);
 *		}
 *	indice++;
 *	}
 *	return (1);
*/

int	ft_str_is_numeric(char *str)

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
		if (ascii < 48 || ascii > 57)
		{	
			return (0);
		}
	indice++;
	}
	return (1);
}
