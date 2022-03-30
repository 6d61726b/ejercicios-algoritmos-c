// Problema 2.1
// Lee dos valores numericos enteros e indicar cual es el mayor y cual es el menor.
// Considerar que ambos valores son diferentes.

#include <stdio.h>

void problema2_1();

void problema2_1()
{
	int a, b;
	int mayor, menor;

	printf("Ingrese dos valores: ");
	scanf("%d %d", &a, &b);

	if(a > b)
	{
		mayor = a;
		menor = b;
	}
	else
	{
		mayor = b;
		menor = a;
	}

	printf("Mayor: %d\n", mayor);
	printf("Menor: %d\n", menor);
}
