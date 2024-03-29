/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lenght_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:23:59 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/12/23 09:01:56 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char arr[6][21] = {"11111111111111111111",
					   "100000001000000000C1",
					   "10010000011100000001",
					   "11000000000000000001",
					   "1P0000110E0000000001",
					   "1111111111111111111"};
	int arraySize = sizeof(arr);
	int intSize = sizeof(arr[0]);

	// lenght
	int lenght = arraySize / intSize;

	printf("arraySize: %d\n", arraySize);
	printf("intSize: %d\n", intSize);
	printf("lenght: %d\n", lenght);
}

// arraySize: 126
// intSize: 21
// lenght: 6
