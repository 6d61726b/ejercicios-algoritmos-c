// Problema 2.11
// Determinar el menor valor de un conjunto de numeros e indicar tambien su posicion relativa dentro del mismo.
// El ingreso de datos finaliza con la llegada de un cero.

#include <stdio.h>

void problema2_11();

void problema2_11()
{
	int numero, menor, posRel, posRelMenor;

	printf("Ingrese un valor: ");
	scanf("%d", &numero);

	posRel = 1;
	menor = numero;

	while(numero != 0)
	{
		if(numero < menor)
		{
			menor = numero;
			posRelMenor = posRel;
		}

		posRel = posRel+1;

		printf("Ingrese el siguiente valor: ");
		scanf("%d", &numero);
	}

	printf("El numero menor es: %d, posicion relativa: %d\n", menor, posRelMenor);
}
