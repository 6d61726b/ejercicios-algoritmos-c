#include "fecha.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Fecha crearFecha(int dia, int mes, int anio)
{
	return anio*10000+mes*100+dia;
}

int obtenerDia(Fecha fecha)
{
	return fecha%100;
}

int obtenerMes(Fecha fecha)
{
	return (fecha%10000)/100;
}

int obtenerAnio(Fecha fecha)
{
	return fecha/10000;
}

int compararFechas(Fecha fecha1, Fecha fecha2)
{
	return fecha1-fecha2;
}

char* toString(Fecha fecha)
{
	int dia = obtenerDia(fecha);
	int mes = obtenerMes(fecha);
	int anio = obtenerAnio(fecha);

	char* s = (char*) malloc(11);
	sprintf(s, "%02d/%02d/%04d", dia, mes, anio);

	return s;
}