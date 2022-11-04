#include "fecha.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Creo las fechas 6/7/2001 y 3/8/2005
	Fecha fecha1 = crearFecha(6, 7, 2001);	
	Fecha fecha2 = crearFecha(3, 8, 2005);

	// Obtengo sus representaciones con formato "dd/mm/aaaa"
	char* strFecha1 = toString(fecha1);
	char* strFecha2 = toString(fecha2);

	// Las comparo para ver cual es posterior
	if (compararFechas(fecha1, fecha2) < 0) 
		printf("%s es posterior a %s\n", strFecha2, strFecha1);
	else
		printf("%s es posterior a %s\n", strFecha1, strFecha2);

	free(strFecha1);
	free(strFecha2);

	return 0;
}