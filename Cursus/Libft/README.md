
# Librerias

Crear una libreria que contenga función de sumar, restar, multiplicar y dividir

### Archivo de cabeceras "libreria.h"
Tendra la extensión ".h" localizado en el mismo directorio del codigo principal, y contendra todos los prototipos de las funciones.

libreria.h

    float suma(float A, float B);
    float resta(float A, float B);
### Archivo del código "lilbreria.c"
Aqui incluira (#include) el archivo cabecera y el codigo de las funciones.

        #include "libreria.h"
        float suma(float A,float B){
        return A+B;
        }
        float resta(float A,float B){
        return A-B;
        }
### Archivo "principal.c"
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
### Compilación
Podemos compilarlo todo junto y crear el correspondiente archivo ejecutable.

        gcc -o ejecutable libreria.c principal.c
Pero es mejor compilar cada fuente ".c" por separado, generando su correspondiente código objeto ".o" y despues enlazarlo todo en un solo ejecutable

        gcc -c principal.c --> principal.o
        gcc -c libreria.c --> libreria.o
        gcc -o a.out principal.o libreria.o

Ahora disponemos de ejecutable a.out que podemos iniciar.

### Añadiendo multiplicación y división
Añadimos al archivo cabecera:

        float multiplicacion(float A, float B);
        float dividir(float A, float B);
Y las funciones a libreria.c

        float multiplicacion(float A,float B){
        return A*B;
        }
        float dividir(float A,float B){
            return A/B;
        }
compilamos libreria.c para generar el archivo objeto, y ya podremos utilizar las funciones multiplicacion y division en nuestro archivo principal.c

    printf("Resultado de %d*%d = %f\n", A,B,multiplicacion(A,B));;
    printf("Resultado de %d*%d = %f\n", A,B,dividir(A,B));
Ahora podemos generar otro archivo ejecutable en el cual tendra estas dos nuevas funciones