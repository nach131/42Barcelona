/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lista_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:38:10 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/06/15 16:09:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// insertar al inicio
int InsertarInicio(NODO **cabeza, int dato);
// Insertar al final crea el nodo de manera implicita
int InsertarFinal(NODO **cabeza, int dato);
// imprimir lista;
void ImprimirLista(NODO *cabeza);

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

int InsertarInicio(NODO **cabeza, int dato)
{
	NODO* nuevo = NULL;

	nuevo = CrearNodo(dato);
	// comprobacion que se creeo el espacio
	if( nuevo != NULL)
		//para insertar el nuevo nodo al inicio
	{
		nuevo->siguiente = *cabeza;
		*cabeza = nuevo;
		return (1);
	}
	return (0);
}

int InsertarFinal(NODO **cabeza, int dato)
{
	NODO* nuevo = NULL, *nAux = *cabeza;

	nuevo = CrearNodo(dato);
	if (nuevo != NULL)
	{
	// apuntador axuliar que recorra la lista asta encontrar el ultimo elemento
		while(nAux->siguiente != NULL)
		{
			nAux = nAux->siguiente; // cuando salga del while estara en el ultimo elemento
		}
		nAux->siguiente = nuevo; // crear nodo pero en NULL
		return (1); // para afirmar que se creo el ultimo nodo de la lista en NULL
	}
	return (0);
}

void ImprimirLista(NODO *cabeza)
{
	NODO *nAux = cabeza;	//apuntador auxiliar nAux iniciado en cabeza

		while (nAux != NULL)
		{
			printf("%d\n", nAux->dato);
			nAux = nAux->siguiente; //para que recorra la lista 
		}
}

int main()
{
	NODO *cabeza = NULL;
	InsertarInicio(&cabeza, 42); 
	InsertarInicio(&cabeza, 131);
	InsertarFinal(&cabeza, 19);
	InsertarFinal(&cabeza, 23);
   	ImprimirLista(cabeza);	
	
	return (0);
}

