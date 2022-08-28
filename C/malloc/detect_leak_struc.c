/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_leak_struc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 00:18:57 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/22 00:59:59 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */
#include <stdio.h>
#include <stdlib.h>

typedef struct _mem_node_t
{
	void *mem_pointer;
	char *file_name;
	char *function;
	int line;
	int size;
	int flag;

} mem_node_t;

#define MAX_MEM_PTRS 1024
mem_node_t mem_node[MAX_MEM_PTRS];

void *add_mem_node(int size, char *file_name, int line, char *function)
{

	int i = 0;
	int ret = -1;

	void *pointer = malloc(size);

	for (i = 0; i < MAX_MEM_PTRS; i++)
	{
		if (mem_node[i].flag == 0)
		{
			mem_node[i].flag = 1;
			mem_node[i].mem_pointer = pointer;
			mem_node[i].file_name = file_name;
			mem_node[i].function = function;
			mem_node[i].line = line;
			mem_node[i].size = size;
			ret = 0;
			break;
		}
	}
	return pointer;
}

void del_mem_node(void *mem_pointer)
{

	int i = 0;
	int ret = -1;

	for (i = 0; i < MAX_MEM_PTRS; i++)
	{
		if (mem_node[i].mem_pointer == mem_pointer)
		{
			mem_node[i].flag = 0;
			mem_node[i].mem_pointer = NULL;
			mem_node[i].file_name = 0;
			mem_node[i].function = 0;
			mem_node[i].line = 0;
			mem_node[i].size = 0;
			ret = 0;
			free(mem_pointer);
			break;
		}
	}
	return;
}

void show_mem_stat(void)
{
	int i = 0;
	int ret = 0;

	for (i = 0; i < MAX_MEM_PTRS; i++)
	{
		if (mem_node[i].flag == 1)
		{
			printf("0x%p of %d bytes allocated"
				   " from %s:%d in %s() is not freed\r\n",
				   mem_node[i].mem_pointer,
				   mem_node[i].size,
				   mem_node[i].file_name,
				   mem_node[i].line,
				   mem_node[i].function);
			ret = 1;
		}
	}
	if (ret == 0)
	{
		printf("no memory leak detected! ");
	}
	return;
}

#undef malloc
#define malloc(size) add_mem_node(size,     \
								  __FILE__, \
								  __LINE__, \
								  (char *)__FUNCTION__)
#undef free
#define free(_p) del_mem_node(_p)

/*user code starts here - We are detecting leak here*/
/*Please note we do not need to modify malloc/free calls*/

void job1(void)
{
	void *p = malloc(1024);
	printf("Job 1\r\n");
	free(p);
}

void job2(void)
{
	void *p = malloc(100);
	printf("Job 2\r\n");
	free(p);
}

void job3(void)
{
	void *p = malloc(10);
	printf("Job 3\r\n");
	/*free(p);*/ /* << memory leak added here*/
}

int main(int argc, char *argv[])
{
	printf("Detect memory leak using C\r\n");
	job1();
	job2();
	job3();
	show_mem_stat();
	return 0;
}


// Detect memory leak using C
// Job 1
// Job 2
// Job 3
// 0x0x7ffb0b402820 of 10 bytes allocated from detect_leak_struc.c:136 in job3() is not freed
