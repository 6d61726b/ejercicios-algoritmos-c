#include <stdlib.h>
#include <string.h>
#include "direccion.h"

Direccion* crearDireccion(char calle[], int numero, int piso, char depto, short* err)
{
	Direccion* direccion = (Direccion*) malloc(sizeof(Direccion));
	if (direccion == NULL) 
		*err = -1;

	strcpy(direccion->calle, calle);
	direccion->numero = numero;
	direccion->piso = piso;
	direccion->depto = depto;

	return direccion;
}