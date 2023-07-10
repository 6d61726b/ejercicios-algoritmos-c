#include <stdio.h>
#include "empleado.h"
#include "indexIdEmpleado.h"

static void leerEmpleado(FILE *archivo, Empleado *empleado)
{
	fread(empleado, sizeof(Empleado), 1, archivo);
}

static void insertarIndex(IndexIdEmpleado a[], int *longitud, IndexIdEmpleado v, int posicion)
{
	for (int i = *longitud; i > posicion; i--)
	{
		a[i] = a[i-1];
	}

	a[posicion] = v;
	*longitud = *longitud+1;
}

static int insertarIndexEnOrden(IndexIdEmpleado a[], int *longitud, IndexIdEmpleado v)
{
	int i = 0;

	while (i < *longitud && a[i].idEmpleado <= v.idEmpleado)
	{
		i++;
	}

	insertarIndex(a, longitud, v, i);

	return i;
}

int indexarPorIdEmpleado(FILE *archivo, IndexIdEmpleado indice[])
{
	int longitud = 0;
	IndexIdEmpleado rIndexIdEmpleado;

	Empleado empleado;
	leerEmpleado(archivo, &empleado);

	while (!feof(archivo))
	{
		rIndexIdEmpleado.idEmpleado = empleado.idEmpleado;
		rIndexIdEmpleado.posicion = longitud;
		insertarIndexEnOrden(indice, &longitud, rIndexIdEmpleado);
		leerEmpleado(archivo, &empleado);
	}

	return longitud;
}