// Se puede tratar de igual manera los INT Y CHAR, porque los caracteres son valores numericos

#include <stdio.h>

void ejemploDatoChar();

void ejemploDatoChar()
{
	// Asigno a c el valor de 65 ( 'A' es sinonimo de 65 )
	char c = 'A';

	printf("Como caracter: %c\n", c);
	printf("Valor numerico ASCII: %d\n", c);

	// Asigno a i el valor 65
	int i = 'A';

	printf("\nComo caracter: %c\n", i);
	printf("Valor numerico ASCII: %d\n", i);
}
