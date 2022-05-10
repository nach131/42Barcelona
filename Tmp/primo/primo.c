/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

/* Contenido de primo.c */
#include <math.h>
#include "primo.h"

int primo(int numero) {
    int i;
    for (i = 2; i <= sqrt(numero); i++) {
        if (numero%i == 0) {
            return 0;
        }
    }
    return 1;
}
