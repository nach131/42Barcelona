/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:10:17 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/11/07 22:25:01 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>

//fonts color
#define FBLACK      "\033[30;"
#define FRED        "\033[31;"
#define FGREEN      "\033[32;"
#define FYELLOW     "\033[33;"
#define FBLUE       "\033[34;"
#define FPURPLE     "\033[35;"
#define D_FGREEN    "\033[6;"
#define FWHITE      "\033[7;"
#define FCYAN       "\x1b[36m"

#define ORANGE		"\033[40m"

//background color
#define BBLACK      "40m"
#define BRED        "41m"
#define BGREEN      "42m"
#define BYELLOW     "43m"
#define BBLUE       "44m"
#define BPURPLE     "45m"
#define D_BGREEN    "46m"
#define BWHITE      "47m"

//end color
#define NONE        "\033[0m"

int main(int argc, char *argv[])
{
	// echo -e "\e[38;5;82mHello \e[38;5;198mWorld"
	printf(D_FGREEN BBLUE"Change color!\n"NONE);
    printf(FRED BWHITE"Change color!\n"NONE);
    printf(ORANGE"Orange\n"NONE);

	printf("-----------------------\n");

	printf ("\e[3;31mRED cursiva. \e[0m\n");
	printf ("\e[1;30mGris Oscuro.\e[0m\n");
	printf ("\e[1;31mNaranja.\e[0m\n");
	printf ("\e[5;32mGreen.\e[0m\n");
	printf ("\e[1;33mYellow.\e[0m\n");
	printf ("\e[1;34mBlue.\e[0m\n");
	printf ("\e[1;35mMagenta.\e[0m\n");
	printf ("\e[1;36mCyan.\e[0m\n");
	printf ("\e[4;31mRojo subrayado.\e[0m\n");
	printf ("\e[4;32mVerde subrayado.\e[0m\n");
	printf ("\e[4;33mRojo subrayado.\e[0m\n");
    return 0;
}
