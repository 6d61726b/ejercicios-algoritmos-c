#ifndef NOTA
#define NOTA

#include "fecha.h"

typedef struct Nota
{
	int puntaje;
	Fecha fecha;
} Nota;

Nota crearNota(int, Fecha);

#endif