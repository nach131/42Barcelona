/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>

int	main(void)
{
char arr[] = "42 Barcelona";

printf("arr: %s\n", arr);	// arr: 42 Barcelona
printf("%c\n", *arr); 		// 4
printf("%c\n", *(arr + 1)); // 2
printf("%c\n", arr[3]); 	// B
}
