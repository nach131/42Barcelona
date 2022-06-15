/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lista_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:38:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/15 19:24:02 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	struct nodo *siguiente; // apuntador al siguiente nodeo
} NODO;										// nombre para la estructura

// funcion crear nodo
NODO *CrearNodo(int dato);
int InsertarInicio(NODO **cabeza, int dato);
int InsertarFinal(NODO **cabeza, int dato);
void ImprimirLista(NODO *cabeza);
int EstaVacia(NODO *cabeza);
int ExisteElemento(NODO *cabeza, int dato);

NODO *CrearNodo(int dato)
{
	NODO *nuevo = NULL;

	nuevo = (NODO *)malloc(sizeof(NODO));
	// CONDICION PARA COMPROBAR QUE SE CREO EL ESPACIO CON MALLOC
	if (nuevo != NULL)
	{
		nuevo->dato = dato;
		nuevo->siguiente = NULL;
	}
	return (nuevo);
}

int InsertarInicio(NODO **cabeza, int dato)
{
	NODO *nuevo = NULL;

	nuevo = CrearNodo(dato);
	// comprobacion que se creeo el espacio
	if (nuevo != NULL)
	// para insertar el nuevo nodo al inicio
	{
		nuevo->siguiente = *cabeza;
		*cabeza = nuevo;
		return (1);
	}
	return (0);
}

int InsertarFinal(NODO **cabeza, int dato)
{
	NODO *nuevo = NULL, *nAux = *cabeza;

	nuevo = CrearNodo(dato);
	if (nuevo != NULL)
	{
		// apuntador axuliar que recorra la lista asta encontrar el ultimo elemento
		while (nAux->siguiente != NULL)
		{
			nAux = nAux->siguiente; // cuando salga del while estara en el ultimo elemento
		}
		nAux->siguiente = nuevo; // crear nodo pero en NULL
		return (1);							 // para afirmar que se creo el ultimo nodo de la lista en NULL
	}
	return (0);
}

void ImprimirLista(NODO *cabeza)
{
	NODO *nAux = cabeza; // apuntador auxiliar nAux iniciado en cabeza

	while (nAux != NULL)
	{
		printf("%d\n", nAux->dato);
		nAux = nAux->siguiente; // para que recorra la lista
	}
}

int EstaVacia(NODO *cabeza)
{
	if (cabeza == NULL)
		return (1);
	else
		return (0);
}

int ExisteElemento(NODO *cabeza, int dato)
{
	NODO *nAux = cabeza;

	while (nAux != NULL)
	{
		if (nAux->dato == dato)
			return (1);
		nAux = nAux->siguiente;
	}
	return (0);
}

int main()
{
	NODO *cabeza = NULL;
	int res;

	InsertarInicio(&cabeza, 42);
	InsertarInicio(&cabeza, 131);
	InsertarFinal(&cabeza, 19);
	InsertarFinal(&cabeza, 23);
	ImprimirLista(cabeza);
	res = ExisteElemento(cabeza, 425);
	if (res == 1)
		printf("Elemento encontrado\n");
	else
		printf("No esta el elemento en la lista\n");
	return (0);
}
