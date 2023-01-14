// Escribir datos en un archivo

#include <stdio.h>

int main()
{
	char c;
	
	// Abro el archivo
	FILE *archivo = fopen("demo.dat", "w+b");

	// Escribo una 'A'
	c = 'A';
	fwrite(&c, sizeof(char), 1, archivo);

	// Escribo una 'B'
	c = 'B';
	fwrite(&c, sizeof(char), 1, archivo);

	// Escribo una 'C'
	c = 'C'
	fwrite(&c, sizeof(char), 1, archivo);
	
	// Cierro el archivo
	fclose(archivo)

	return 0;
}