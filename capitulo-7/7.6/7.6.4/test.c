#include <stdio.h>
#include <stdlib.h>
#include "direccion.h"
#include "persona.h"

char memErr(short err);

int main()
{
	short err;

	err = 0;
	Direccion* direccion = crearDireccion("El calden", 4433, 1, 'A', &err);
	memErr(err);

	err = 0;
	Persona* persona = crearPersona("Marcos", 42598656, *direccion, &err);
	memErr(err);

	free(direccion);
	free(persona);

	return 0;
}

char memErr(short err) 
{
	if (err == -1)
		return printf("Error al asignar memoria!\n");
}