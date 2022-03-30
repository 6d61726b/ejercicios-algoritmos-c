// Problema 1.4
// Se ingresa un valor numerico de 8 digitos que representa una fecha con el siguiente formato:
// aaaammdd. Esto es: los 4 primeros digitos representan el año, los siguientes 2 digitos
// representan el mes y los 2 digitos restantes representan el dia. Se pide informar por
// separado el dia, mes y el año de la fecha ingresada.

#include <stdio.h>

void problema1_4();

void problema1_4()
{
	long fecha;
	int dia,mes,anio;
	int resto;

	printf("Ingrese una fecha: ");
	scanf("%d",&fecha);

	anio = fecha/10000;
	resto = fecha%10000;

	mes = resto/100;
	dia = resto%100;

	printf("Dia: %d\n",dia);
	printf("Mes: %d\n",mes);
	printf("Año: %d\n",anio);
}
