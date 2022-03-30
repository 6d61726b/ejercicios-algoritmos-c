// Ejemplo 2: Aritmética de direcciones

#include <stdio.h>

void ejemplo_2();

void ejemplo_2()
{
	char a[] = "Esto es una cadena";

	printf("[%s]\n", a); // Imprime: [Esto es una cadena]
	printf("[%s]\n", a + 5); // Imprime: [es una cadena]
	printf("[%s]\n", a + 9); // Imprime: [na cadena]
	printf("[%s]\n", a + 12); // Imprime: [cadena]
}
