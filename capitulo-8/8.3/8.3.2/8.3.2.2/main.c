// Acceso directo para escritura

#include <stdio.h>
#include "alumno.h"

int main()
{
	FILE* archivo = fopen("alumnos.dat", "r+b");

	int nRegistro;
	printf("Ingrese numero de registro: ");
	scanf("%d", &nRegistro);
	fflush(stdout);

	// Ingreso los nuevos datos por consola
	Alumno alumno = ingresoDatosXConsola();

	// Posiciono el identificador de posicion
	fseek(archivo, nRegistro*sizeof(Alumno), SEEK_SET);

	// Grabo el registro pisando los valores anteriores
	fwrite(&alumno, sizeof(Alumno), 1, archivo);

	fclose(archivo);

	return 0;
}