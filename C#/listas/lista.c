/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// https://www.youtube.com/watch?v=NPmwuR4VbKk

#include <stdio.h>
#include <stdlib.h>

// lista de datos enteros

typedef struct nodo
{
	int dato;
	struct nodo *siguiente; // apuntador al siguiente nodo
} NODO;										// nombre para la estructura

// función crear nodo
NODO *CrearNodo(int dato);

NODO *CrearNodo(int dato)
{
	NODO *nuevo = NULL;

	nuevo = (NODO *)malloc(sizeof(NODO));
	// CONDICIÓN PARA COMPROBAR QUE SE CREO EL ESPACIO CON MALLOC
	if (nuevo != NULL)
	{
		nuevo->dato = dato;
		nuevo->siguiente = NULL;
	}
	return (nuevo);
}

int main()
{
	NODO *nuevo;

	nuevo = CrearNodo(42);
	printf("el dato de nuevo nodo es: %d\n", nuevo->dato);
	return (0);
}

// el dato de nuevo nodo es: 42
