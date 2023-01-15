// Valor actual del identificador de posición (función ftell)

#include <stdio.h>

int main()
{
	char c;
	FILE *archivo;

	// Abro el archivo
	archivo = fopen("demo.dat", "r+b");

	// Obtengo la posicion actual
	long posicion = ftell(archivo);

	// Leo el primer caracter
	fread(&c, sizeof(c), 1, archivo);

	// Mientras no llegue al final del archivo...
	while (!feof(archivo)) 
	{
		// Muestro el caracter leido
		printf("Byte numero: %ld, %c\n", posicion, c);

		// Obtengo la posicion actual
		posicion = ftell(archivo);

		// Leo el siguiente caracter
		fread(&c, sizeof(c), 1, archivo);
	}

	// Cierro el archivo
	fclose(archivo);

	return 0;
}