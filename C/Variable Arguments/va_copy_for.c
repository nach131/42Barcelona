/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_copy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:27:03 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/11 20:36:06 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <stdarg.h>

double sample_stddev(int count, ...)
{
	double sum = 0;
	va_list args1;
	va_start(args1, count);
	va_list args2;
	va_copy(args2, args1);
	for (int i = 0; i < count; ++i) {
		double num = va_arg(args1, double);
		sum += num;
	}
	va_end(args1);
	double mean = sum / count;

	double sum_sq_diff = 0;

	for (int i = 0; i < count; ++i) {
		double num = va_arg(args2, double);
		sum_sq_diff += (num-mean) * (num-mean);
	}
	va_end(args2);
	return sqrt(sum_sq_diff / count);
}

int main()
{
	printf("%f\n", sample_stddev(4, 25.0, 27.3, 26.9, 25.7));
	//cout << sample_stddev(4, 25.0, 27.3, 26.9, 25.7) << '\n';
}
