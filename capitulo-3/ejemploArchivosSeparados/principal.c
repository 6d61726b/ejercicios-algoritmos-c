/* Ejemplo archivos separados */

// Estructura:

// funciones.h
// funciones.c
// principal.c => archivo actual

#include <stdio.h>
#include "funciones.h" // Header

void principal() // Equibalente a main
{
	double numero, resultado;

	printf("Ingrese un numero: ");
	scanf("%lf", &numero);

	resultado = valorAbsoluto(numero);

	printf("El valor absoluto de %lf es: %lf", numero, resultado);
}
