// Limitaciones de los archivos secuenciales

#ifndef EMPLEADO_H
#define EMPLEADO_H

typedef struct Empleado
{
	int idEmpleado;
	char nombre[30];
	char direccion[120];
	long fechaIngreso;
} Empleado;

#endif