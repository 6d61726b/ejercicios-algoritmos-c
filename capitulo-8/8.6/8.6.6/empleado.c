#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"

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

static long byteARegistro(int numeroDeByte)
{
	return numeroDeByte / sizeof(Empleado);
}

static long registroAByte(int numeroDeRegistro)
{
	return numeroDeRegistro * sizeof(Empleado);
}

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

int indexar(FILE *archivo, IndexIdEmpleado indice[])
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