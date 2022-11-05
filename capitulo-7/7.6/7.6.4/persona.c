#include <stdlib.h>
#include <string.h>
#include "persona.h"
#include "direccion.h"

Persona* crearPersona(char nombre[], long dni, Direccion direccion, short* err)
{
	Persona* persona = (Persona*) malloc(sizeof(Persona));
	if (persona == NULL) 
		*err = -1;

	strcpy(persona->nombre, nombre);
	persona->dni = dni;
	persona->direccion = direccion;

	return persona;
}