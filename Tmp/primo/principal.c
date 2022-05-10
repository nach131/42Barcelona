/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

/* Contenido de principal.c */
#include <stdio.h>
#include "primo.h"

int main() {
    int num;

    printf("Introduce un numero entero: ");
    scanf("%d", &num);

    printf("\nEl numero %d", num);

    if (primo(num))
        printf(" es primo.\n");
    else
        printf(" no es primo.\n");

    return 0;
}
