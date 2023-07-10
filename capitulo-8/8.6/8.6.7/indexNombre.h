#ifndef INDEX_NOMBRE_H
#define INDEX_NOMBRE_H

#include <stdlib.h>

typedef struct IndexNombre
{
	char nombre[30];
	int posicion;
} IndexNombre;

int indexarPorNombre(FILE *archivo, IndexNombre indice[]);

#endif