#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"

static void leerEmpleado(FILE *archivo, Empleado *empleado)
{
	fread(empleado, sizeof(Empleado), 1, archivo);
}

static void grabarEmpleado(FILE *archivo, Empleado *empleado)
{
	fwrite(empleado, sizeof(Empleado), 1, archivo);
}

int subirArchivo(FILE *archivo, Empleado empleados[])
{
	Empleado empleado;
	int longitud = 0;

	leerEmpleado(archivo, &empleado);

	while (!feof(archivo))
	{
		empleados[longitud++] = empleado;
		leerEmpleado(archivo, &empleado);
	}

	return longitud;
}

void ordenar(Empleado empleados[], int longitud)
{
	int ordenado = 0;
	while (!ordenado)
	{
		ordenado = 1;
		for (int i = 0; i < longitud-1; i++)
		{
			if (empleados[i].idEmpleado > empleados[i+1].idEmpleado)
			{
				Empleado aux = empleados[i];
				empleados[i] = empleados[i+1];
				empleados[i+1] = aux;
				ordenado = 0;
			}
		}
	}
}

void bajarArchivo(FILE *archivo, Empleado empleados[], int longitud)
{
	for (int i = 0; i < longitud; i++)
	{
		grabarEmpleado(archivo, empleados+i);
	}
}