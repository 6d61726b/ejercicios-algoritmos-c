#include <stdio.h>
#include "cadenas.h"

void testsCadenas();

void testsCadenas()
{
	/*
	char a[] = "Esta cadena";
	char b[] = "Es";

	printf("[%s] es prefijo de [%s]? %d\n", b, a, esPrefijo(a, b));

	printf("[%s] es sufijo de [%s]? %d\n", b, a, esSufijo(a, b));

	char* s = "Esto es una cadena";

	printf("%s\n", subString(s, 0, 4)); // Imprime "Esto"
	printf("%s\n", subString(s, 8, 11)); // Imprime "una"
	*/

	char* x = "      Esto es una cadena          ";

	printf("[%s]\n", trim(x));
}
