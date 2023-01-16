// Legibilidad del código fuente

#include <stdio.h>
#include "alumno.h"

int main()
{
	FILE* archivo;
	Alumno alumno;

	/* Escribir archivo */

	archivo = fopen("alumnos.dat", "w+b");
	alumno = crearAlumno(18253, "Marcos", 10);

	grabarAlumno(&alumno, archivo);

	fclose(archivo);

	/* Leer archivo */
	
	archivo = fopen("alumnos.dat", "r+b");

	leerAlumno(&alumno, archivo);

	while (!feof(archivo))
	{
		printf("%d, %s, %d\n", alumno.matricula, alumno.nombre, alumno.nota);
		leerAlumno(&alumno, archivo);
	}

	return 0;
}