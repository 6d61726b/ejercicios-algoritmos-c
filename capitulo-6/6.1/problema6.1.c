// Problema 6.1
// Desarrollar un programa que le permita al usuario ingresar un conjuento de 10 valores enteros.
// Luego se debe imprimir el conjunto que el usuario ingreso, primero en el orden original y luego, en orden inverso.
// Por ejemplo, si el usuario ingresa: 12, 43, 5, 26, 7, 98, 1, 32, 18, 9 la salida del programa debe ser la siguiente:
// Orden original: 12, 43, 5, 26, 7, 98, 1, 32, 18, 9
// Orden inverso: 9, 18, 32, 1, 98, 7, 26, 5, 43, 12

#include <stdio.h>

void problema6_1();

void problema6_1()
{
	int i, array[10];

	// Leemos los datos que ingresa el usuario
	for(i = 0; i < 10; i++)
	{
		printf("Ingrese un valor numerico: ");
		scanf("%d", &array[i]);
	}

	// Mostramos el conjunto en orden original
	printf("\nOrden Original:\n");
	for(i = 0; i < 10; i++)
	{
		printf("%i\n", array[i]);
	}

	// Mostramos el conjuento en orden inverso
	printf("\nOrden Inverso:\n");
	for(i = 9; i >= 0; i--)
	{
		printf("%i\n", array[i]);
	}
}
