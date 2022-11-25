/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colore.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:02:39 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/11/18 19:11:39 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <unistd.h>

#define NNRM "\x1B[0m"
#define NRED "\x1B[31m"
#define NGRN "\x1B[32m"
#define NYEL "\x1B[33m"
#define NBLU "\x1B[34m"
#define NMAG "\x1B[35m"
#define NCYN "\x1B[36m"
#define NWHT "\x1B[37m"

#define BNRM "\x1B[40m"
#define BRED "\x1B[41m"
#define BGRN "\x1B[42m"
#define BYEL "\x1B[43m"
#define BBLU "\x1B[44m"
#define BMAG "\x1B[45m"
#define BCYN "\x1B[46m"
#define BWHT "\x1B[47m"

int main()
{
	write(1, NNRM "BLACK\n", 11);
	write(1, NRED "RED\n", 9);
	write(1, NGRN "GREEN\n", 12);
	write(1, NYEL "YELLOW\n", 13);
	write(1, NBLU "BLUE\n", 13);
	write(1, NMAG "MAGENTA\n", 15);
	write(1, NCYN "CYAN\n", 10);
	write(1, NWHT "WHITE\n", 12);

	write(1, NNRM "==========\n", 16);
	write(1, NNRM "BLACK\n", 15);
	write(1, BWHT NRED "RED\n", 9);
	write(1, NGRN "GREEN\n", 12);
	write(1, NYEL "YELLOW\n", 13);
	write(1, NBLU "BLUE\n", 13);
	write(1, NMAG "MAGENTA\n", 15);
	write(1, NCYN "CYAN\n", 10);
	write(1, NWHT "WHITE\n", 12);

	return 0;
}

// BRED NYEL
// BGRN NBLU
