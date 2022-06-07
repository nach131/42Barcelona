/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:13:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/07 16:30:47 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../src/libft.h"

size_t  ft_strlcpy  (char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    if (size > 0)
    {
		// src[i] tenga dato AND i menor que
		// copiar src a dst
        while (src[i] && i < (size - 1))
        {
            dst[i] = src[i];
            i++;
        }
		// cuando no se cumpla poner 0 en lo que queda de dst
        dst[i] = 0;
    }
	// si src es mas largo que dsr sumar i para devolver la longitud de src
    while (src[i])
        i++;
    return (i);
}
int	main(void)
{
//	char	src[] = {'\0', '\0'};
	char	src[] = "42 Barcelona";
	char	dst[20];
	size_t	n;

	n = 5;
	
	ft_strlcpy(dst, src, n);
	printf("main: \n src: '%s'\n dst: '%s'\n lenght src: %lu\n", src, dst, sizeof(src));
return (0);
}
//  main:
//   src: '42 Barcelona'
//   dst: '42 B'
//   lenght src: 13
