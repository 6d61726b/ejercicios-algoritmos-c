// Problema 3.3

// Estructura:

// prototipos.h
// funciones.c => archivo actual
// problema3.3.c

void divideFecha(long x, int* d, int* m, int* a)
{
	int resto;

	*a = x/10000;
	resto = x%10000;

	*m = resto/100;
	*d = resto%100;
}

int esAnioBisiesto(int anio)
{
	int j, a;

	j = anio/100;

	if(j%4 == 0){
		a = 0;
	}
	else
	{
		a = 1;
	}

	return a;
}
