/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libreria.h"
#include "stdio.h"

int main(){
    int A;
    int B;

	printf("introduce un numero para A: ");
	scanf("%d", &A);
	printf("introduce un numero para B: ");
	scanf("%d", &B);
    printf("Resultado de %d+%d = %f\n", A,B,suma(A,B));
    printf("Resultado de %d-%d = %f\n", A,B,resta(A,B));
    printf("Resultado de %d*%d = %f\n", A,B,multiplicacion(A,B));
}
