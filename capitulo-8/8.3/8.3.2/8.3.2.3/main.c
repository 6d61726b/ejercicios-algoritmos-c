// Agregar un registro al final del archivo

#include <stdio.h>
#include "alumno.h"

int main()
{
	FILE* archivo = fopen("alumnos.dat", "r+b");
	
	// Ingreso los datos por consola
	Alumno alumno = ingresoDatosXConsola();

	// Posiciono el puntero al final del archivo
	fseek(archivo, 0, SEEK_END);

	// Grabo el nuevo registro
	fwrite(&alumno, sizeof(Alumno), 1, archivo);

	fclose(archivo);

	return 0;
}