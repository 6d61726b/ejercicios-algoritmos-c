// Problema 2.10
// Dado un conjunto de valores numericos indicar cual es el mayor. El ingreso de datos finaliza con la llegada de un cero.

#include <stdio.h>

void problema2_10();

void problema2_10()
{
	int numero, mayor;

	printf("Ingrese un valor: ");
	scanf("%d", &numero);

	mayor = numero;

	while(numero != 0)
	{
		printf("Ingrese el siguiente valor: ");
		scanf("%d", &numero);

		if(numero > mayor)
		{
			mayor = numero;
		}
	}

	printf("El numero mayor es: %d", mayor);
}
