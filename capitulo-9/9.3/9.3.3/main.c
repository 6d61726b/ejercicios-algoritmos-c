#include <stdio.h>
#include <stdlib.h>
#include "fecha.h"

int main()
{
	Fecha fecha1 = crearFecha(18, 10, 1977);
	Fecha fecha2 = crearFecha(6, 7, 2001);

	char *cadenaFecha1 = toString(fecha1);
	char *cadenaFecha2 = toString(fecha2);

	if (compararFechas(fecha1, fecha2) > 0)
	{
		printf("%s es posterior a %s\n", cadenaFecha2, cadenaFecha1);
	}
	else
	{
		printf("%s es posterior a %s\n", cadenaFecha1, cadenaFecha2);
	}

	free(cadenaFecha1);
	free(cadenaFecha2);

	return 0;
}