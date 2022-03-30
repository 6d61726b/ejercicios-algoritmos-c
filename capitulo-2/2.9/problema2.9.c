// Problema 2.9
// Desarrollar un algoritmo que muestre los primeros n numeros primos siendo n un valor que debe ingresar el usuario.

#include <stdio.h>

void problema2_9();

void problema2_9()
{
	int n, esPrimo;
	int num, contador;

	printf("Cuantos primos quieren ver? ");
	scanf("%d",&n);

	num = 1;
	contador = 0;

	while(contador < n)
	{
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
			printf("%d\n", num);
			contador++;
		}

		num++;
	}
}
