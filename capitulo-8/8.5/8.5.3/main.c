// Escribir lineas (funcion fprintf)

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	FILE *archivo = fopen(argv[1], "w+");
	char linea[100];

	// Muestro una flecha y luego leeo una linea por teclado
	printf("-->");
	gets(linea);

	int i = 0;
	while (strcmp(linea, "FIN"))
	{
		// Grabo el numero de linea y la linea en el archivo
		fprintf(archivo, "%d, %s\n", i++, linea);

		// Muestro una flecha y luego leeo una linea por teclado
		printf("-->");
		gets(linea);
	}

	fclose(archivo);

	return 0;
}