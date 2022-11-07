#ifndef FECHA
#define FECHA

typedef long Fecha;

Fecha crearFecha(int, int, int);

int obtenerDia(Fecha);

int obtenerMes(Fecha);

int obtenerAnio(Fecha);

int compararFechas(Fecha, Fecha);

char* toString(Fecha);

#endif