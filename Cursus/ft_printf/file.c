/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include"ft_printf.h"

void file(char *sr){
	printf("%s\n", sr);
}

int main(void){
	int x = 42;
	printf("%05d\n", x);
	file("42 Barcelona");
}
