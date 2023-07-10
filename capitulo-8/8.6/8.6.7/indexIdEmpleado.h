#ifndef INDEX_ID_EMPLEADO_H
#define INDEX_ID_EMPLEADO_H

#include <stdlib.h>

typedef struct IndexIdEmpleado
{
	int idEmpleado;
	int posicion;
} IndexIdEmpleado;

int indexarPorIdEmpleado(FILE *archivo, IndexIdEmpleado indice[]);

#endif