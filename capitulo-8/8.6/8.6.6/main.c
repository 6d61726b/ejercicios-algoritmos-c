#include <stdio.h>
#include "empleado.h"

int main()
{
	FILE *archivo = fopen("empleados.dat", "a+b");
	IndexIdEmpleado indice[100];

	// Indexo el archivo
	int longitud = indexar(archivo, indice);

	Empleado empleado;

	for (int i = 0; i < longitud; i++)
	{
		fseek(archivo, indice[i].posicion * sizeof(Empleado), SEEK_SET);
		fread(&empleado, sizeof(Empleado), 1, archivo);
		printf("%d %s\n", empleado.idEmpleado, empleado.nombre);
	}

	fclose(archivo);

	return 0;
}