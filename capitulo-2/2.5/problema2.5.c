// Problema 2.5
// Desarrolla un algoritmo que muestre por pantalla los primeros n numeros naturales considerando al 0 (cero)
// como primer numero natural.

#include <stdio.h>

void problema2_5();

void problema2_5()
{
	int n;

	printf("Ingrese un valor numerico: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++)
	{
		printf("%d ", i);
	}

	/*

	Vercion con el ciclo while

	i = 0;
	while(i < n)
	{
		printf("%d ", i);
		i = i+1;

	}

	*/
}
