/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:29:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/14 21:29:43 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	indice;

	indice = 0;
	while (s1[indice] != '\0' || s2[indice] != '\0')
	{
		if (s1[indice] != s2[indice])
		{
			return (s1[indice] - s2[indice]);
		}
		indice++;
	}
	return (0);
}
