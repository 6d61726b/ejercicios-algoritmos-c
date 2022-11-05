#ifndef PERSONA
#define PERSONA

#include "direccion.h"

typedef struct Persona
{
	char nombre[30];
	long dni;
	Direccion direccion;
} Persona;

Persona* crearPersona(char[], long, Direccion, short*);

#endif