// Problema 2.6
// Determinar la sumatoria de los elementos de un conjunto de valores numericos. Los numeros se ingresaran por teclado.
// Se ingresará un cero para finalizar.

#include <stdio.h>

void problema2_6();

void problema2_6()
{
	int n, suma;

	printf("Ingrese un valor numerico: ");
	scanf("%d", &n);

	suma = 0;
	while(n!=0)
	{
		suma = suma+n;

		printf("Ingrese otro valor numerico: ");
		scanf("%d", &n);
	}

	printf("La suma es: %d", suma);
}
