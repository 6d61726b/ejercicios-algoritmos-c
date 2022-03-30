// Problema 3.4
// Desarrollar una funcion que reciba un valor numerico y que en cada invocacion sucesiva retorne cada uno de sus factores.
// El valor de retorno de la funcion debe ser booleano para indicar si se pudo obtener un nuevo factor o no.

// prototipos.h
// funciones.c
// problema3.4.c => archivo actual (seria mi main)

#include <stdio.h>
#include "prototipos.h"

void problema3_4();

void problema3_4()
{
	int n, factor, aux, ok, cont;

	aux = 0;

	printf("Ingrese un numero para obtener su factores: ");
	scanf("%d", &n);

	ok = factorizar(n, &factor, &aux);

	cont = 1;

	while(ok)
	{
		printf(cont,"° factor de %d\n", factor);
		ok = factorizar(n, &factor, &aux);

		cont = cont + 1;
	}
}
