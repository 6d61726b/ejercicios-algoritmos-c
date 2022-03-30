// Ejemplo arrays de cadenas

#include <stdio.h>

void ejemplo();

void ejemplo()
{
	char* arr[] = {"Hola","Mark","Chau"};

	for(int i = 0; i < 3; i++)
	{
		printf("%s\n", arr[i]);
	}
}
