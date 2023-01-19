// Acceso directo para lectura

#include <stdio.h>
#include "alumno.h"

int main()
{
	FILE* archivo = fopen("alumnos.dat", "r+b");

	int nRegistro;
	printf("Ingrese numero de registro: ");
	scanf("%d", &nRegistro);

	// Posiciono el puntero del archivo
	fseek(archivo, nRegistro*sizeof(Alumno), SEEK_SET);

	// Con el puntero posicionado, leo el registro
	Alumno alumno;
	fread(&alumno, sizeof(Alumno), 1, archivo);

	// Muestro los datos
	printf("Matricula: %d\n", alumno.matricula);
	printf("Nombre: %s\n", alumno.nombre);
	printf("Nota: %d\n", alumno.nota);

	fclose(archivo);

	return 0;
}