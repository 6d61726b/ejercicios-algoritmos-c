// Problema 1.2
// Lee dos valores numericos enteros e informe su cociente.

#include <stdio.h>

void problema1_2();

void problema1_2()
{
	int aa,bb;
	double cociente;

	printf("Scribe 2 numbers: ");
	scanf("%d %d",&aa,&bb);

	// verifico si el denominador es cero
	if(bb==0)
	{
		printf("Error, no se puede dividir por 0");
	}
	else
	{
		cociente = (double)aa/bb;
	}

	printf("%d / %d = %1f",aa,bb,cociente);
}
