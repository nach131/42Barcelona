/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:17:27 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 22:02:11 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// ascii 65=A 90=Z
// +32 empieza las minusculas
// while mientras encuentre Mayusculas

char *ft_strlowcase(char *str)
{
	int indice;
	int ascii;

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
