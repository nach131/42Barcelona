/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include<stdio.h>
#include<stdlib.h>

// lista de datos enteros

typedef struct nodo
{
	int dato;
	struct nodo *siguiente;	//apuntador al siguiente nodeo
} NODO; // nombre para la estructura

// funcion crear nodo
NODO* CrearNodo(int dato);

int main()
{
	NODO *nuevo;

	nuevo = CrearNodo(42);
	printf("el dato de nuevo nodo es: %d\n", nuevo->dato);
	return (0);
}

NODO*	CrearNodo(int dato)
{
	NODO *nuevo = NULL;

	nuevo = (NODO*)malloc(sizeof(NODO));
	//CONDICION PARA COMPROBAR QUE SE CREO EL ESPACIO CON MALLOC
	if (nuevo != NULL)
	{
	nuevo->dato = dato;
	nuevo->siguiente = NULL;
	}
	return (nuevo);
}

// el dato de nuevo nodo es: 42
