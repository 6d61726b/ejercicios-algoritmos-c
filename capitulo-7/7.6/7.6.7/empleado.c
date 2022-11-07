#include "empleado.h"
#include "fecha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void agregarEmpleado(Empleado empleados[], int* len, int matricula, char* nombre, Fecha fecha)
{
	empleados[*len].matricula = matricula;
	strcpy(empleados[*len].nombre, nombre);
	empleados[*len].fechaIngreso = fecha;
	(*len)++;
}

void mostrarEmpleado(Empleado empleados[], int indiceEmpleado)
{
	Empleado empleado = empleados[indiceEmpleado];
	printf("Nombre: %s\n", empleado.nombre);
	printf("Matricula: %i\n", empleado.matricula);
	char* s = toString(empleado.fechaIngreso);
	printf("Fecha de ingreso: %s\n", s);
	free(s);
}