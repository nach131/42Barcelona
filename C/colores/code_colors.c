/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code_colors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:56:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/11/08 09:32:36 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "code_colors.h"
#include <stdio.h>

int main(void)
{

	printf("=== Regular Colors === \n" RESET);
	printf(Black "Black\n" RESET);
	printf(Red "Red\n" RESET);
	printf(Green "Green\n" RESET);
	printf(Yellow "Yellow\n" RESET);
	printf(Blue "Blue\n" RESET);
	printf(Magenta "Magenta\n" RESET);
	printf(Cyan "Cyan\n" RESET);
	printf(White "White\n" RESET);

	printf("=== Bold === \n" RESET);
	printf(BBlack "BBlack\n" RESET);
	printf(BRed "BRed\n" RESET);
	printf(BGreen "BGreen\n" RESET);
	printf(BYellow "BYellow\n" RESET);
	printf(BBlue "BBlue\n" RESET);
	printf(BMagenta "BMagenta\n" RESET);
	printf(BCyan "BCyan\n" RESET);
	printf(BWhite "BWhite\n" RESET);

	printf("=== Underline === \n" RESET);
	printf(UBlack "UBlack\n" RESET);
	printf(URed "URed\n" RESET);
	printf(UGreen "UGreen\n" RESET);
	printf(UYellow "UYellow\n" RESET);
	printf(UBlue "UBlue\n" RESET);
	printf(UMagenta "UMagenta\n" RESET);
	printf(UCyan "UCyan\n" RESET);
	printf(UWhite "UWhite\n" RESET);

	// printf("=== Background === \n" RESET);
	// printf(On_Black "On_Black\n" RESET);
	// printf(On_Red "On_Red\n" RESET);
	// printf(On_Green "On_Green\n" RESET);
	// printf(On_Yellow "On_Yellow\n" RESET);
	// printf(On_Blue "On_Blue\n" RESET);
	// printf(On_Magenta "On_Magenta\n" RESET);
	// printf(On_Cyan "On_Cyan\n" RESET);
	// printf(On_White "On_White\n" RESET);

	printf("=== High Intensity === \n" RESET);
	printf(IBlack "IBlack\n" RESET);
	printf(IRed "IRed\n" RESET);
	printf(IGreen "IGreen\n" RESET);
	printf(IYellow "IYellow\n" RESET);
	printf(IBlue "IBlue\n" RESET);
	printf(IMagenta "IMagenta\n" RESET);
	printf(ICyan "ICyan\n" RESET);
	printf(IWhite "IWhite\n" RESET);

	printf("=== Bold High Intensity === \n" RESET);
	printf(BIBlack "BIBlack\n" RESET);
	printf(BIRed "BIRed\n" RESET);
	printf(BIGreen "BIGreen\n" RESET);
	printf(BIYellow "BIYellow\n" RESET);
	printf(BIBlue "BIBlue\n" RESET);
	printf(BIMagenta "BIMagenta\n" RESET);
	printf(BICyan "BICyan\n" RESET);
	printf(BIWhite "BIWhite\n" RESET);

	// printf("=== High Intensity backgrounds=== \n" RESET);
	// printf(On_Black "On_Black\n" RESET);
	// printf(On_Red "On_Red\n" RESET);
	// printf(On_Green "On_Green\n" RESET);
	// printf(On_Yellow "On_Yellow\n" RESET);
	// printf(On_Blue "On_Blue\n" RESET);
	// printf(On_Magenta "On_Magenta\n" RESET);
	// printf(On_Cyan "On_Cyan\n" RESET);
	// printf(On_White "On_White\n" RESET);
}
