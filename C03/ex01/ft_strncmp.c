/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:59:37 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/14 21:59:39 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	indice;

	indice = 0;
	while (indice < n && (s1[indice] != '\0' || s2[indice] != '\0'))
	{
		if (s1[indice] != s2[indice])
		{
			return (s1[indice] - s2[indice]);
		}
	indice++;
	}
	return (0);
}
