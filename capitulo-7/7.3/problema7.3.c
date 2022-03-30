// Problema 7.3
// Dado un conjunto de números enteros determinar cuántas veces se repite cada uno.
// Los datos se ingresan sin ningún orden y finalizan al llegar el valor 0. Se garantiza que a
// lo sumo habrá 100 números diferentes.

#include <stdio.h>
#include "arrays.h"

int main()
{
	int arr[100];
	int v;
	int aNum[];
	int aCont[];

	for(int i=0;i<100;i++) // Pedimos los datos
	{
		scanf("%i",&v);
		v!=0?arr[i]=v:break;
	}



	return 0;
}