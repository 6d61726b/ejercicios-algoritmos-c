// Problema 2.13
// Se ingresa por consola un numero entero que representa un sueldo que se debe pagar.
// Considerando que existe billetes de las denominaciones que se indican mas abajo;
// informar, que cantidad de billetes de cada denominacion se debera utilizar, dando prioridad a los de valor nominal mas alto.
// Denominaciones ($) = {100,50,20,10,5,2,1}

#include <stdio.h>

void problema2_13();
void denominacion(int*, int); // 2° solucion

void problema2_13()
{
	int sueldo;

	// Ingreso el sueldo a pagar
	printf("Ingrese el valor a pagar $");
	scanf("%d", &sueldo);

	denominacion(&sueldo, 100);
	denominacion(&sueldo, 50);
	denominacion(&sueldo, 20);
	denominacion(&sueldo, 10);
	denominacion(&sueldo, 5);
	denominacion(&sueldo, 2);
	denominacion(&sueldo, 1);

/* 1° solucion:

	int denom = 100;
	int cant = sueldo / denom;
	int residuo = sueldo % denom;
	printf("%d billetes de $%d\n", cant, denom);

	// Repito la operacion considerando solo el residuo
	sueldo = residuo;
	denom = 50;
	cant = sueldo / denom;
	residuo = sueldo % denom;
	printf("%d billetes de $%d\n", cant, denom);

	// Repito la operacion considerando solo el residuo
	sueldo = residuo;
	denom = 20;
	cant = sueldo / denom;
	residuo = sueldo % denom;
	printf("%d billetes de $%d\n", cant, denom);

	// Repito la operacion considerando solo el residuo
	sueldo = residuo;
	denom = 10;
	cant = sueldo / denom;
	residuo = sueldo % denom;
	printf("%d billetes de $%d\n", cant, denom);

	// Repito la operacion considerando solo el residuo
	sueldo = residuo;
	denom = 5;
	cant = sueldo / denom;
	residuo = sueldo % denom;
	printf("%d billetes de $%d\n", cant, denom);

	// Repito la operacion considerando solo el residuo
	sueldo = residuo;
	denom = 2;
	cant = sueldo / denom;
	residuo = sueldo % denom;
	printf("%d billetes de $%d\n", cant, denom);

	// Repito la operacion considerando solo el residuo
	sueldo = residuo;
	denom = 1;
	cant = sueldo / denom;
	residuo = sueldo % denom;
	printf("%d billetes de $%d\n", cant, denom);
*/
}

void denominacion(int* s, int d)
{
	int cant = *s / d;
	*s = *s % d;

	printf("%d billetes de $%d\n", cant, d);
}
