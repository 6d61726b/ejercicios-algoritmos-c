#include "fecha.h"

typedef struct Empleado 
{
	int matricula;
	char nombre[20];
	Fecha fechaIngreso;
} Empleado;

Empleado* crearEmpleado(int, char[], Fecha);

int obtenerMatricula(Empleado*);

char* obtenerNombre(Empleado*);

char* obtenerFechaIngreso(Empleado*);