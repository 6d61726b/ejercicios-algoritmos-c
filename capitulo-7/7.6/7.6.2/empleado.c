#include "empleado.h"
#include "fecha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Empleado* crearEmpleado(int matricula, char nombre[], Fecha fechaIngreso)
{
	Empleado* empleado = (Empleado*) malloc(sizeof(Empleado));

	empleado->matricula = matricula;
	strcpy(empleado->nombre, nombre);
	empleado->fechaIngreso = fechaIngreso;

	return empleado;
}

int obtenerMatricula(Empleado* empleado)
{
	return empleado->matricula;
}

char* obtenerNombre(Empleado* empleado)
{
	char* s = (char*) malloc(sizeof(empleado->nombre)+1);
	sprintf(s, "%s", empleado->nombre);
	return s;
}

char* obtenerFechaIngreso(Empleado* empleado)
{
	return toString(empleado->fechaIngreso);
}