// Problema 2.7
// Dado un conjunto de valores numericos que se ingresan por trclado determinar el valor promedio.
// El fin de datos se indica ingresando un valor igual a cero.

#include <stdio.h>

void problema2_7();

void problema2_7()
{
	int num, suma, contador, promedio;

	printf("Ingrese un valor numerico: ");
	scanf("%d", &num);

	suma = 0;
	contador = 0;

	while(num != 0)
	{
		suma = suma + num;
		contador++;

		printf("Ingrese el siguiente valor: ");
		scanf("%d", &num);
	}

	promedio = suma / contador;

	printf("El promedio es: %d",promedio);
}
