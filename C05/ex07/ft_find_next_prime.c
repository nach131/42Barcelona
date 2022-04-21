/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:37:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/04/19 20:37:20 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

int ft_is_prime(long long nb)
{
        long long i;

        i = 2;
        if (nb <= 1)
                return (0);
        while (i * i <= nb)
        {
                if (nb % i == 0)
                        return (0);
                i++;
        }
        return (1);
}

int ft_find_next_prime(int nb)
{
        long long i;

        i = (long long)nb;
        while (i <= 2147483647)
        {
                if (ft_is_prime(i) == 1)
                        return ((int)i);
                i++;
        }
        return (0);
}
