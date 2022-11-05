#ifndef DIRECCION
#define DIRECCION

typedef struct Direccion
{
	char calle[50];
	int numero;
	int piso;
	char depto;
} Direccion;

Direccion* crearDireccion(char[], int, int, char, short*);

#endif 