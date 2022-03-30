#include <stdio.h>
#include "caracteres.h"

void pruebaFun();

void pruebaFun()
{
	char c = 'A';

	printf("esDigito(%c) = %d\n", c, esDigito(c));
	printf("esLetra(%c) = %d\n", c, esLetra(c));
	printf("esMinuscula(%c) = %d\n", c, esMinuscula(c));
	printf("esMayuscula(%c) = %d\n", c, esMayuscula(c));

	printf("aMinuscula(%c) = %c\n", c, aMinuscula(c));
	printf("aMayuscula(%c) = %c\n", c, aMayuscula(c));
}
