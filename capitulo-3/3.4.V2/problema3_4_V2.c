// Problema 3.4
// Desarrollar una funcion que reciba un valor numerico y que en cada invocacion sucesiva retorne cada uno de sus factores.
// El valor de retorno de la funcion debe ser booleano para indicar si se pudo obtener un nuevo factor o no.

// prototipos.h
// funciones.c
// problema3.4.V2.c => archivo actual (seria mi main)

#include <stdio.h>

void problema3_4_V2();

void problema3_4_V2()
{
	int n, factor, ok;

		printf("Ingrese un numero para obtener su factores: ");
		scanf("%d", &n);

		ok = factorizarr(n, &factor);

		while(ok)
		{
			ok = factorizarr(n, &factor);
			printf("factor de %d\n", factor);
		}
}
