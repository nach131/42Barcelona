/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_leak.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 00:01:22 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/22 00:18:09 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
#include <stdio.h>
#include <stdlib.h>

int mem_counter = 0;

void my_free(void *p)
{
	free(p);
	printf("Free memory %p \n", p);
	printf("Current leak counter %d\n", --mem_counter);
}

void *my_malloc(int size)
{
	void *ret;
	ret = malloc(size);
	if (ret)
	{
		printf("Allocated memory @%p of size %d \n", ret, size);
		printf("Current leak counter %d\n", ++mem_counter);
	}
	return ret;
}

#undef malloc
#define malloc(size) my_malloc(size)
#undef free
#define free(p) my_free(p)

/*user code starts here - We are detecting leak here*/

void some_task1(void)
{
	void *p;
	printf("Task 1\r\n");
	p = malloc(512);
	if (p)
		free(p);
}

void some_task2(void)
{
	void *p;
	printf("Task 2\r\n");
	p = malloc(256);

	/*free(p);*/ /* << memory leak added here*/
}

void some_task3(void)
{
	void *p;
	printf("Task 3\r\n");
	p = malloc(20);

	if (p)
		free(p);
}

int main(int argc, char *argv[])
{
	printf("Memory leak detect using counter\r\n");
	some_task1();
	some_task2();
	some_task3();
	if (mem_counter > 0)
		printf("memory leak detected, %d of chunk(s) not freeded\n", mem_counter);
	return 0;
}
/*user code ends here*/

// Memory leak detect using counter
// Task 1
// Allocated memory @0x7fd078c028b0 of size 512
// Current leak counter 1
// Free memory 0x7fd078c028b0
// Current leak counter 0
// Task 2
// Allocated memory @0x7fd078c027b0 of size 256
// Current leak counter 1
// Task 3
// Allocated memory @0x7fd078c028b0 of size 20
// Current leak counter 2
// Free memory 0x7fd078c028b0
// Current leak counter 1
// memory leak detected, 1 of chunk(s) not freeded
