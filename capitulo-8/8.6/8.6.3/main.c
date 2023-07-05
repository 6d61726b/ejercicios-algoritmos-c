// Ordenamiento de archivos en memoria

#include <stdio.h>
#include "empleado.h"

int main()
{
	Empleado empleados[100];
	FILE *archivo;

	// Abro el archivo, lo subo, lo ordeno y lo cierro
	archivo = fopen("empleados.dat", "r+b");
    if (archivo == NULL)
    {
        printf("El archivo no existe o no se pudo abrir en modo r+b.\n");
        return -1;
    }

	int longitud = subirArchivo(archivo, empleados);
	ordenar(empleados, longitud);
	fclose(archivo);

	// Lo abro para escritura, lo bajo y lo cierro
	archivo = fopen("empleado.dat", "w+b");
	if (archivo == NULL)
	{
		printf("El archivo no existe o no se pudo abrir en modo w+b.\n");
		return -1;
	}

	bajarArchivo(archivo, empleados, longitud);
	fclose(archivo);

	return 0;
}