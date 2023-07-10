#include <stdio.h>
#include "empleado.h"
#include "indexIdEmpleado.h"
#include "indexNombre.h"

int main()
{
	FILE *archivo = fopen("empleados.dat", "a+b");
	IndexIdEmpleado indicePorIdEmpleado[100];

	// Indexo el archivo por idEmpleado
	int longitud = indexarPorIdEmpleado(archivo, indicePorIdEmpleado);

	Empleado empleado1;

	printf("Ordenado por idEmpleado\n");
	for (int i = 0; i < longitud; i++)
	{
		fseek(archivo, indicePorIdEmpleado[i].posicion * sizeof(Empleado), SEEK_SET);
		fread(&empleado1, sizeof(Empleado), 1, archivo);
		printf("%d %s\n", empleado1.idEmpleado, empleado1.nombre);
	}

	fclose(archivo);

	printf("\n");
	
	archivo = fopen("empleados.dat", "a+b");
	IndexNombre indicePorNombre[100];

	// Indexo el archivo por nombre
	longitud = indexarPorNombre(archivo, indicePorNombre);

	Empleado empleado2;

	printf("Ordenado por nombre\n");
	for (int i = 0; i < longitud; i++)
	{
		fseek(archivo, indicePorNombre[i].posicion * sizeof(Empleado), SEEK_SET);
		fread(&empleado2, sizeof(Empleado), 1, archivo);
		printf("%d %s\n", empleado2.idEmpleado, empleado2.nombre);
	}

	fclose(archivo);

	return 0;
}