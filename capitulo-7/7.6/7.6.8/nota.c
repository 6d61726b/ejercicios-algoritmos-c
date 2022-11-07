#include "nota.h"
#include "fecha.h"

Nota crearNota(int puntaje, Fecha fecha)
{
	Nota nota;

	nota.puntaje = puntaje;
	nota.fecha = fecha;

	return nota;
}