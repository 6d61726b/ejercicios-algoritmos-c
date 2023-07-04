// Leer datos formateados (funcion fscanf)

#include <stdio.h>
#include <string.h>

int main()
{
	FILE *archivo = fopen("texto.txt", "r+");

	char nombre[11];
	float altura;
	int edad;

	fscanf(archivo, "%s %f %d", nombre, &altura, &edad);
	while (!feof(archivo))
	{
		printf("%s, %.2f, %d\n", nombre, altura, edad);
		fscanf(archivo, "%s %f %d", nombre, &altura, &edad);
	}

	fclose(archivo);

	return 0;
}