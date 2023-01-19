#include <string.h>
#include "alumno.h"

Alumno crearAlumno(int matricula, char nombre[], int nota)
{
	Alumno x;

	x.matricula = matricula;
	strcpy(x.nombre, nombre);
	x.nota = nota;
	
	return x;
}