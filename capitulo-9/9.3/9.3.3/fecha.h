#ifndef FECHA_H
#define FECHA_H

typedef struct Fecha
{
	int dia;
	int mes;
	int anio;
} Fecha;

Fecha crearFecha(int dia, int mes, int anio);
int obtenerDia(Fecha fecha);
int obtenerMes(Fecha fecha);
int obtenerAnio(Fecha fecha);
int compararFechas(Fecha fecha1, Fecha fecha2);
char *toString(Fecha fecha);

#endif