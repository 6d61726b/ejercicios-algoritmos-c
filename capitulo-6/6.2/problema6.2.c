// Problema 6.2
// Desarrolla un programa que le permita al usuario ingresar un conjunto de 5 cadenas de caracteres.
// Luego se debe imprimir el conjunto que el usuario ingresó, pero en orden inverso.

#include <stdio.h>
//#include <stdlib.h>

void problema6_2();

void problema6_2()
{
	char* cadenas[5]; // Array de cadenas
	char cadenaAux[20]; // Cadena auxiliar para leer

	// Leemos los datos que ingresa el usuario
	for(int i = 0; i < 5; i++)
	{
		printf("Ingrese una cadena: ");
		scanf("%s", cadenaAux);

		// Creo una nueva cadena y asigno su direccion a caddenas[i]
		cadenas[i] = (char*) malloc(longitud(cadenaAux + 1));

		// Copio el contenido de cadenaAux a cadenas[i]
		copiarCadena(cadenas[i], cadenaAux);
	}

	printf("\n"); // Salto de linea para separar el ingreso de datos del resultado

	// Mostramos el conjunto en orden inverso
	for(int i = 4; i >= 0; i--)
	{
		printf("%s\n", cadenas[i]);
	}
}
