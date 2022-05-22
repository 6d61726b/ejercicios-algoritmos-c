// Problema 7.3
// Dado un conjunto de números enteros determinar cuántas veces se repite cada uno.
// Los datos se ingresan sin ningún orden y finalizan al llegar el valor 0. Se garantiza que a lo sumo habrá 100 números diferentes.

#include <stdio.h>
#include "arrays.h"

int main()
{
	int aNum[100], aCont[100];
	int len = 0;

	inicializarContadores(aCont);
	
	int v;
	printf("Ingrese un valor: ");
	scanf("%d", &v);

	int enc, pos;

	while (v != 0) 
	{
		pos = buscarYAgregar(aNum, &len, v, &enc);
		aCont[pos] = aCont[pos] + 1;

		printf("Ingrese un valor: ");
		scanf("%d", &v);
	}

	mostrarResultados(aNum, len, aCont);
	return 0;
}