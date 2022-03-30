// Problema 3.1

// Estructura:

// fecha.h
// fecha.c => archivo actual
// problema3.1.c

long unificarFecha(int dia, int mes, int anio)
{
	int f = anio*10000+mes*100+dia;

	return f;
}
