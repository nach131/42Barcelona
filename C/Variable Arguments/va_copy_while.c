/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_copy_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:41:44 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/11 20:16:39 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>
#include <stdarg.h>
#include <math.h>

double deviation(int first, ...);

int main( void )
{
	/* Call with 3 integers (-1 is used as terminator). */
	printf("Deviation is: %f\n", deviation(2, 3, 4, -1 ));

	/* Call with 4 integers. */
	printf("Deviation is: %f\n", deviation(5, 7, 9, 11, -1));

	/* Call with just -1 terminator. */
	printf("Deviation is: %f\n", deviation(-1));
}

/* Returns the standard deviation of a variable list of integers. */
double deviation(int first, ...)
{
	int count = 0, i = first;
	double mean = 0.0, sum = 0.0;
	va_list marker;
	va_list copy;

	va_start(marker, first);     /* Initialize variable arguments. */
	va_copy(copy, marker);       /* Copy list for the second pass */
	while (i != -1)
	{
//		printf("%d\n", i);
		sum += i;
		count++;
		i = va_arg(marker, int);
//		printf("suma: %f\n", sum);
	}
	va_end(marker);              /* Reset variable argument list. */
	mean = sum ? (sum / count) : 0.0;
// printf("desviacion\n");
	i = first;                  /* reset to calculate deviation */
	sum = 0.0;
	while (i != -1)
	{
	//	printf("\t%d\n",i);
		sum += (i - mean)*(i - mean);
		i = va_arg(copy, int);
//		printf("\t %f\n", i);
	}
	va_end(copy);               /* Reset copy of argument list. */
	return count ? sqrt(sum / count) : 0.0;
}
