// Problema 3.2
// Mostrar los primeros n numeros primos siendo n un valor que ingresara el usuario.

// fecha.h
// fecha.c
// problema3.2.c => archivo actual (seria mi main)

#include <stdio.h>
#include "numeros.h"

void problema3_2();

void problema3_2()
{
	int n, cont, i;

	printf("Cuantos numeros primos quiere ver? ");
	scanf("%d", &n);

	cont = 0;
	i = 1;

	while(cont < n)
	{
		if(esPrimo(i))
		{
			printf("%d\n",i);
			cont = cont + 1;
		}

		i = i + 1;
	}
}
