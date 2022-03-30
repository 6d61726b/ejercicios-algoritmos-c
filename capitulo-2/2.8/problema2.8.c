// Problema 2.8
// Se ingresa un valor numerico por consola, determinar e informar si se trata de un numero primo o no.

#include <stdio.h>

void problema2_8();

void problema2_8()
{
	int num, esPrimo;

	printf("Ingrese un valor numerico: ");
	scanf("%d", &num);

	esPrimo = 1;

	for(int i=2; i<num && esPrimo; i++)
	{
		if(num%i == 0)
		{
			esPrimo = 0;
		}
	}

	if(esPrimo)
	{
		printf("%d Es primo\n", num);
	}
	else
	{
		printf("%d No es primo\n", num);
	}
}
