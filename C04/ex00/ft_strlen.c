/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:29:09 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 22:02:20 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// indice me vala para recorrer los caracteres del puntero y para devolver
// la suma de todos los caracteres... (o)(o)

int ft_strlen(char *str)
{
	int indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		indice++;
	}
	return (indice);
}
