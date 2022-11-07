#include "alumno.h"
#include "nota.h"
#include <string.h>

Alumno crearAlumno(char nombre[], int matricula, Nota notas[])
{
	Alumno alumno;
	
	strcpy(alumno.nombre, nombre);
	alumno.matricula = matricula;

	alumno.notas[0].puntaje = notas[0].puntaje;
	alumno.notas[0].fecha = notas[0].fecha;

	alumno.notas[1].puntaje = notas[1].puntaje;
	alumno.notas[1].fecha = notas[1].fecha;

	alumno.notas[2].puntaje = notas[2].puntaje;
	alumno.notas[2].fecha = notas[2].fecha;

	return alumno;
}