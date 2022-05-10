/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libreria.h"
#include "stdio.h"

int main(){
    int A = 133;
    int B = 23;
    printf("Resultado de %d+%d = %f\n", A,B,suma(A,B));
    printf("Resultado de %d-%d = %f\n", A,B,resta(A,B));
    printf("Resultado de %d*%d = %f\n", A,B,multiplicacion(A,B));
}
