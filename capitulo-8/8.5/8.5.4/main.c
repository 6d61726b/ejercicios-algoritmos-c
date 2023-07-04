// Leer lineas (funcion fgets)

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	FILE *archivo = fopen(argv[1], "r+");
	char linea[100];

	// Leo una linea
	fgets(linea, 100, archivo);

	// Mientras no llegue el fin del archivo
	while (!feof(archivo))
	{
		printf("--> %s", linea);

		// Leo la siguiente linea
		fgets(linea, 100, archivo);
	}

	fclose(archivo);

	return 0;
}