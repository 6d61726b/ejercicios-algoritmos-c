/* Ejemplo archivos separados */

// Estructura:

// funciones.h
// funciones.c => archivo actual
// principal.c

double valorAbsoluto(double x) // Cabezera de la funcion
{
	// Cuerpo de la funcion
	double ret = x;

	if(ret < 0)
	{
		ret = -ret;
	}

	return ret;
}
