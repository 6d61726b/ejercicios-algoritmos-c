#include <stdio.h>

void inicializarContadores(int a[])
{
	for (int i = 0; i < 100; i++) 
		a[i] = 0;
}

void mostrarResultados(int aNum[], int len, int aCont[])
{
	for (int i = 0; i < len; i++)
		printf("%d paracece %d veces\n", aNum[i], aCont[i]);
}