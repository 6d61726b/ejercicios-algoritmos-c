// Problema 1.1
// Lee dos valores enteros e informar su suma.

#include <stdio.h>

int main()
{
	unsigned int a,b,c;

	printf("Scribe 2 numbers: ");
	scanf("%i %i", &a, &b);

	c = a+b;

	printf("%i + %i = %i\n", a, b, c);
}
