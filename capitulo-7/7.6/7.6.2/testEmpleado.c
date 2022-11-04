#include "empleado.h"
#include "fecha.h"
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matricula;
	char nombreEmpleado[20];
	int dia, mes, anio;

	printf("Ingrese su matricula: ");
	scanf("%d", &matricula);

	printf("Ingrese su nombre: ");
	scanf("%s", nombreEmpleado);

	printf("Fecha de ingreso\n");
	printf("Ingrese el dia: ");
	scanf("%d", &dia);

	printf("Ingrese el mes: ");
	scanf("%d", &mes);

	printf("Ingrese el año: ");	
	scanf("%d", &anio);

	Fecha fechaIngreso = crearFecha(dia, mes, anio);
	Empleado* marcos = crearEmpleado(matricula, nombreEmpleado, fechaIngreso);

	matricula = obtenerMatricula(marcos);
	printf("\nMatricula: %d\n", matricula);

	char* nombre = obtenerNombre(marcos);
	printf("Nombre del empleado: %s\n", nombre);

	char* fecha = obtenerFechaIngreso(marcos);
	printf("Fecha de ingreso: %s\n", fecha);

	free(nombre);
	free(fecha);
	free(marcos);

	return 0;
}