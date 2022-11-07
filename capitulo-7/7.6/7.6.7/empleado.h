#ifndef EMPLEADO
#define EMPLEADO

#include "fecha.h"

typedef struct Empleado 
{
	int matricula;
	char nombre[20];
	Fecha fechaIngreso;
} Empleado;

void agregarEmpleado(Empleado empleados[], int* len, int matricula, char* nombre, Fecha fecha);

void mostrarEmpleado(Empleado empleados[], int indiceEmpleado);

#endif