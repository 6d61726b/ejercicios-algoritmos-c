// Problema 1.3
// Dado un valor numerico entero, informe si es par o impar.

#include <stdio.h>

void problema1_3();

void problema1_3()
{
	int n;

	printf("Ingrese un valor: ");
	scanf("%d",&n);

	if(n%2==0)
	{
		printf("%d es par\n",n);
	}
	else
	{
		printf("%d es impar\n",n);
	}
}
