/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tipos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:49:08 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/12/23 13:58:35 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>

int main(void)
{
	printf("<char> %zd bytes\n", sizeof(char));
	printf("<short> %zd bytes\n", sizeof(short));
	printf("<int> %zd bytes\n", sizeof(int));
	printf("<float> %zd bytes\n", sizeof(float));
	printf("<long> %zd bytes\n", sizeof(long));
	printf("<long long> %zd bytes\n", sizeof(long long));
	printf("<double> %zd bytes\n", sizeof(double));
	printf("<long double> %zd bytes\n", sizeof(long double));
	printf("<size_t> %zd bytes\n", sizeof(size_t));
	printf("<int8_t> %zd bytes\n", sizeof(int8_t));
	printf("<int16_t> %zd bytes\n", sizeof(int16_t));
	printf("<int32_t> %zd bytes\n", sizeof(int32_t));
	printf("<int64_t> %zd bytes\n", sizeof(int64_t));
}

// <char> 1 bytes
// <short> 2 bytes
// <int> 4 bytes
// <float> 4 bytes
// <long> 8 bytes
// <long long> 8 bytes
// <double> 8 bytes
// <long double> 16 bytes
// <size_t> 8 bytes
// <int8_t> 1 bytes
// <int16_t> 2 bytes
// <int32_t> 4 bytes
// <int64_t> 8 bytes
