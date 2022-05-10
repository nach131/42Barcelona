/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:29:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 22:02:15 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// while mientras s1[indice] no sea null o s2[indice] no sea null
// IF s1[indice] es diferente a s2[indice]
// devolvera s1[indice] - s2[indice]
//

int ft_strcmp(char *s1, char *s2)
{
	int indice;

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
