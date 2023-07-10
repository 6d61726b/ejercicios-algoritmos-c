#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "empleado.h"
#include "indexNombre.h"

static int esMenorAlfabeticamente(char cadena1[], char cadena2[])
{
	int longitudCadena1 = strlen(cadena1);
	int longitudCadena2 = strlen(cadena2);

	int max;
	if (longitudCadena1 > longitudCadena2)
		max = longitudCadena1;
	else
		max = longitudCadena2;

	int i = 0;
	while (i <= max)
	{
		if (cadena1[i] < cadena2[i])
			return 1;
		else if (cadena1[i] > cadena2[i])
			return 0;
		else
			i++;
	}
}

static void leerEmpleado(FILE *archivo, Empleado *empleado)
{
	fread(empleado, sizeof(Empleado), 1, archivo);
}

static void insertarIndex(IndexNombre a[], int *longitud, IndexNombre v, int posicion)
{
	for (int i = *longitud; i > posicion; i--)
	{
		a[i] = a[i-1];
	}

	a[posicion] = v;
	*longitud = *longitud+1;
}

static int insertarIndexEnOrden(IndexNombre a[], int *longitud, IndexNombre v)
{
	int i = 0;

	while (i < *longitud && esMenorAlfabeticamente(a[i].nombre, v.nombre)) //&& a[i].nombre <= v.nombre)
	{
		i++;
	}

	insertarIndex(a, longitud, v, i);

	return i;
}

int indexarPorNombre(FILE *archivo, IndexNombre indice[])
{
	int longitud = 0;
	IndexNombre rIndexNombre;

	Empleado empleado;
	leerEmpleado(archivo, &empleado);

	while (!feof(archivo))
	{
		strcpy(rIndexNombre.nombre, empleado.nombre);
		rIndexNombre.posicion = longitud;
		insertarIndexEnOrden(indice, &longitud, rIndexNombre);
		leerEmpleado(archivo, &empleado);
	}

	return longitud;
}