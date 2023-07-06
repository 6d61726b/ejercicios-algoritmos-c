// Indexacion de archivos

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <stdlib.h>

typedef struct IndexIdEmpleado
{
	int idEmpleado;
	int posicion;
} IndexIdEmpleado;

typedef struct Empleado
{
	int idEmpleado;
	char nombre[30];
	char direccion[120];
	long fechaIngreso;
} Empleado;

int subirArchivo(FILE *archivo, Empleado empleados[]);
void ordenar(Empleado empleados[], int longitud);
void bajarArchivo(FILE *archivo, Empleado empleados[], int longitud);
int indexar(FILE *archivo, IndexIdEmpleado indice[]);

#endif