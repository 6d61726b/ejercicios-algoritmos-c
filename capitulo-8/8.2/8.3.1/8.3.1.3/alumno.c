#include <stdio.h>
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

void grabarAlumno(Alumno* alumno, FILE* archivo)
{
	fwrite(alumno, sizeof(Alumno), 1, archivo);
}

void leerAlumno(Alumno* alumno, FILE* archivo)
{
	fread(alumno, sizeof(Alumno), 1, archivo);
}