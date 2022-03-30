// Problema 3.1
// Leer seis valores numericos enteros. Los primeros 3 representan el dia,
// el mes y el año de una fecha, los tres restantes representan los mismos atributos de otra.
// Se pide determinar e informar cual de las dos fechas es posterior.

// Estructura:

// fecha.h
// fecha.c
// problema3.1.c => archivo actual (seria mi main)

#include <stdio.h>
#include "fecha.h" // header

void problema3_1();

void problema3_1()
{
	int d1, m1, a1;
	int d2, m2, a2;
	long f1, f2;

	printf("Ingrese fecha 1: ");
	scanf("%d %d %d", &d1, &m1, &a1);

	printf("Ingrese fecha 2: ");
	scanf("%d %d %d", &d2, &m2, &a2);

	// Invoco a la funcion para unificar f1 y luego f2
	f1 = unificarFecha(d1, m1, a1);

	f2 = unificarFecha(d2, m2, a2);

	if(f1 > f2)
	{
		printf("La fecha 1 es la posterior");
	}
	else
	{
		printf("La fecha 2 es la posterior");
	}

}

