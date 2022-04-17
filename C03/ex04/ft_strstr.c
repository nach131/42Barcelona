/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:23:02 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/17 16:34:57 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// IF si es  nullo devulve el str
// while mientras str[indice_a] no se null
// // while str[indice_a = indice_b] IGUAL to_fd[indice_b]
// SI mientras to_find[indice_b +1] no sea null
// return lo encontrado

char	*ft_strstr(char *str, char *to_find)
{
	int	indice_a;
	int	indice_b;

	indice_a = 0;
	indice_b = 0;
	if (to_find[indice_a] == '\0')
		return (str);
	while (str[indice_a] != '\0')
	{
		indice_b = 0;
		while (str[indice_a + indice_b] == to_find[indice_b])
		{
			if (to_find[indice_b + 1] == '\0')
				return (&(str[indice_a]));
			indice_b++;
		}
		indice_a++;
	}
	return (0);
}
