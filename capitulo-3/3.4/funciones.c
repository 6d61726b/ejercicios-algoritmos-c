// Problema 3.4

// Estructura:

// prototipos.h
// funciones.c => archivo actual
// problema3.4.c

#include <stdio.h>

int factorizar(int n, int* factorr, int* temp)
{
	int i = 2;

	*temp = n;
	*temp = *temp == 0?n:*temp;

	while(i <= *temp && *temp%i != 0)
	{
		i = i + 1;
	}

	*factorr = i;
	*temp = *temp / i;

	return *temp >= 1;
}
