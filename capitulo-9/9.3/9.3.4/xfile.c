#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xfile.h"

typedef struct XFile
{
	FILE *archivo;		// Archivo original
	int recSize;		// Longitud de los registros del archivo original
	FILE *archivoBajas;	// Archivo de bajas
	int *bajas;			// Array de bajas para subir el archivo
	int lenBajas;		// Longitud del array de bajas
	int actual;			// Numero de registro actualmente apuntado en arch
} XFile;

Xfile xopen(char *nombreArchivo, char *modo, int recSize)
{
	XFile xFile;

	// Abro el archivo original
	xFile.archivo = fopen(nombreArchivo, modo);

	// Abro el archivo de bajas (primero obtengo su nombre)
	char *nombreBajas = obtenerNombreBajas(nombreArchivo);
	xFile.archivoBajas = fopen(nombreBajas, modo);

	// Dimensiono el array de bajas y subo el archivo de bajas
	xFile.bajas = (int*) malloc(sizeof(int) * xrecCount(&xFile, 1));
	xFile.lenBajas = subirBajas(xFile.archivoBajas, xFile.bajas);

	// Guardo el tamanio de registro
	xFile.recSize = recSize;

	// Posiciono el puntero en el primer registro del archivo
	xseek(&xFile, 0);
	return xFile;
}

static char *obtenerNombreBajas(char *nombreArchivo)
{
	char *c = (char*) malloc(strlen(nombreArchivo) + 1 + 1);
	strcpy(c, nombreArchivo);
	strcat(c, "_");
	return c;
}

static int subirBajas(FILE *archivo, int a[])
{
	int r;
	int len = 0;

	fread(&r, sizeof(int), 1, archivo);
	while (!feof(archivo))
	{
		a[len++] = r;
		fread(&r, sizeof(int), 1, archivo);
	}

	return len;
}

void xclose(XFile *xFile)
{
	fclose(xFile->archivoBajas);
	fclose(xFile->archivo);
	free(xFile->bajas);
}