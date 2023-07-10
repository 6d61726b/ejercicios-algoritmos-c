#include <stdio.h>
#include <stdlib.h>
#include "fecha.h"

Fecha crearFecha(int dia, int mes, int anio)
{
	Fecha fecha;
	fecha.dia = dia;
	fecha.mes = mes;
	fecha.anio = anio;

	return fecha;
}

int obtenerDia(Fecha fecha)
{
	return fecha.dia;
}

int obtenerMes(Fecha fecha)
{
	return fecha.mes;
}

int obtenerAnio(Fecha fecha)
{
	return fecha.anio;
}

int compararFechas(Fecha fecha1, Fecha fecha2)
{
	int difD = fecha2.dia - fecha1.dia;
	int difM = fecha2.mes - fecha1.mes;
	int difA = fecha2.anio - fecha1.anio;

	return difA != 0 ? difA : difM != 0 ? difM : difD;
}

char *toString(Fecha fecha)
{
	char* cadena = (char*) malloc(11);
	sprintf(cadena, "%02d/%02d/%04d", fecha.dia, fecha.mes, fecha.anio);

	return cadena;
}