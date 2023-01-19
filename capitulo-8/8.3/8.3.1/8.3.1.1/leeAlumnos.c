// Archivos de estructuras

#include <stdio.h>
#include <string.h>
#include "alumno.h"

int main()
{
	FILE* archivo; 
	Alumno alumno;
 
 	// Abrimos el archivo para lectura
	archivo = fopen("alumnos.dat", "r+b");

	// La primera leida la hacemos afuera del while
	fread(&alumno, sizeof(Alumno), 1, archivo);

	while (!feof(archivo))
	{
		printf("%d, %s, %d\n", alumno.matricula, alumno.nombre, alumno.nota);

		// Leemos el siguiente registro del archivo
		fread(&alumno, sizeof(Alumno), 1, archivo);
	}

	// Cierro el archivo
	fclose(archivo);

	return 0;
}