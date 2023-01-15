// Leer datos desde un archivo

#include <stdio.h>

int main()
{
	char c;
	FILE *archivo;

	// Abro el archivo
	archivo = fopen("demo.dat", "r+b");

	// Leo el primer caracter
	fread(&c, sizeof(c), 1, archivo);

	// Mientras no llegue al final del archivo...
	while (!feof(archivo))
	{
		// Muestro el caracter leido
		printf("%c\n", c);

		// Leo el siguiente caracter
		fread(&c, sizeof(c), 1, archivo);
	}

	// Cierro el archivo
	fclose(archivo);

	return 0;
}