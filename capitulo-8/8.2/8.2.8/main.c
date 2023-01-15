// Calcular el tamaño de un archivo

#include <stdio.h>

long fileSize(FILE* archivo)
{
	long actual = ftell(archivo);
	fseek(archivo, 0, SEEK_END);

	long ultimo = ftell(archivo);
	fseek(archivo, actual, SEEK_SET);

	return ultimo;
}

int main()
{
	FILE* archivo;

	archivo = fopen("demo.dat", "r+b");

	long size = fileSize(archivo);
	printf("El archivo tiene %ld bytes\n", size); 

	return 0;
}