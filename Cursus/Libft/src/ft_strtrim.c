/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:02:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/03 21:02:02 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                   https:github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

//  Reserva con malloc(3) y devuelve una copia de ’s1’ con los caracteres dados
//  en ’set’ eliminados tanto del principio como del final.
//
//  *s1- La string a recortar.
//  *ser- El conjunto de caracteres utilizado como referencia para el recorte.

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	len;
//// ----------------
//	char	trim[] = "42 Barcelona";
////	res = strchr(trim, 52);
//	res = strchr(trim, (int)*set);
//	printf("set: %s, %d\n", set,(int)*set);
//// --------------
	res = strchr((char *)set, s1[1]);
	printf("ft_res: %s\n\n", res);
	if (!*s1 || !*set)
		return (NULL);
	i = 0;
// por delante
	while (ft_strchr((char *)set, s1[i]) != NULL && s1[i] != '\0')
	{
		printf("%c,",s1[i]);
		i++;
	}
// por detras
len = ft_strlen(&s1[i]);
	return ((char *)s1);
	}
int	main(void)
{

	printf("\nOriginal: 42 Barcelona\nres:  %s\n", ft_strtrim("42 Barcelona", "24"));

}
