/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 22:01:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 22:01:55 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// recorro todo valor del puntero
// escribo caracter por caracte
// while mientras el puntero tenga datos str[letras]
// write &str para indicar que quiero el valor del puntero
// con la posicion de la letra.

#include <unistd.h>
void ft_putstr(char *str)
{
  int letra;
  letra = 0;
  while (str[letra])
  {
    write(1, &str[letra], 1);
    letra++;
  }
}
