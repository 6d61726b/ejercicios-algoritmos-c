// Ejemplo 3: Función malloc()

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* obtenerSaludo();
void ejemplo_3();

void ejemplo_3()
{
	// Invoco a la funcion que retorna una cadena
	char* s = obtenerSaludo();

	// Muestro la cadena
	printf("%s\n", s);
}

char* obtenerSaludo()
{
	// Cadena local
	char a[] = "Hola, Mundo";

	// Longitud de la cadena que vamos a retornar
	int l = strlen(a);

	// Array de n+1 caracteres generado dinamicamente
	char* r = (char*) malloc(l+1);

	// Asigna la cadena al array gestionado dinamicamente
	strcpy(r, a);

	return r;
}
