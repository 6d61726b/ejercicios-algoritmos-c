// Problema 7.1
// Dado un conjunto de numeros enteros mayores o iguales a 0
// y menores que 100 determinar e informar cuantas veces aparece cada uno.
// El conjunto finaliza con la llegada de un valor negativo.

#include <stdio.h>

void problema7_1();
void inicializarContadores(int a[]);
void mostrarResultados(int a[]);

void problema7_1()
{
	int aCont[100];
	int v;

	// Inicializo el array
	inicializarContadores(aCont);

	printf("Ingrese un valor: ");
	scanf("%d", &v);

	while(v >= 0)
	{
		aCont[v] = aCont[v] + 1;
		printf("Ingrese un valor: ");
		scanf("%d", &v);

		// Muestro los resultados
		mostrarResultados(aCont);
	}
}

void inicializarContadores(int a[])
{
	for(int i = 0; i < 100; i++)
	{
		a[i] = 0;
	}
}

void mostrarResultados(int a[])
{
	for(int i = 0; i < 100; i++)
	{
		if(a[i] > 0)
		{
			printf("%d aparece %d veces\n", i, a[i]);
		}
	}
}
