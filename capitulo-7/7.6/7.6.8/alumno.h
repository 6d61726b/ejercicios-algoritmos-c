#ifndef ALUMNO
#define ALUMNO

#include "nota.h"

typedef struct Alumno
{
	int matricula;
	char nombre[30];
	Nota notas[3];
} Alumno;

Alumno crearAlumno(char[], int, Nota[]);

#endif