// Problema 2.4
// Se ingresa por teclado un conjunto de valores numericos enteros positivos, se pide informr, por cada uno,
// si el valor ingresado es par o impar. Para indicar el final se ingresará un valor cero o negativo.

#include <stdio.h>

void problema2_4();

void problema2_4()
{
	int n;

	printf("Ingrese un valor: ");
	scanf("%d",&n);

	while(n>0)
	{
		if(n%2==0)
		{
			printf("%d es par\n",n);
		}
		else
		{
			printf("%d es impar\n",n);
		}

		printf("\nIngrese un valor: ");
		scanf("%d",&n);

	}
}
