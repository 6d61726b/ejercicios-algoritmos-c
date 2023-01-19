// Archivos de estructuras

#include <stdio.h>
#include <string.h>
#include "alumno.h"

int main()
{
	FILE* archivo;
	Alumno alumno;
 
 	// Abro el archivo para escritura
	archivo = fopen("alumnos.dat", "w+b");

	// Grabo un alumno
	alumno = crearAlumno(18253, "Marcos", 10);
	fwrite(&alumno, sizeof(Alumno), 1, archivo);

	// Grabo un alumno
	alumno = crearAlumno(24674, "Juan", 8);
	fwrite(&alumno, sizeof(Alumno), 1, archivo);

	// Grabo un alumno
	alumno = crearAlumno(34472, "Pablo", 7);
	fwrite(&alumno, sizeof(Alumno), 1, archivo);

	// Cierro el archivo
	fclose(archivo);

	return 0;
}