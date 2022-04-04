/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:11:35 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/03 19:35:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Asccii a=97 z=122 */

#include <unistd.h>

void	ft_print_alphabet(){
char c;
c = 97;

while (c<=122){
write(1, &c, 1);
c++;
}

/*write(1, &c, 1);*/
}


int	main()
{

ft_print_alphabet();

}
