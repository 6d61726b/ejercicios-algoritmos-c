// Problema 2.3
// Leer un valor numérico que representa un dia de la semana. Se pide mostrar por pantalla el nombre del dia considerando que el lunes es el dia 1,
// el martes es el dia 2 y asi, sucesivamente.

#include <stdio.h>
#include <string.h>

void problema2_3();

void problema2_3()
{
	int nDia;
	char dia[9];

	printf("Ingrese dia de la semana: ");
	scanf("%d", &nDia);

	switch(nDia)
	{
		case 1:
			strcpy(dia, "Lunes");
			break;

		case 2:
			strcpy(dia, "Martes");
			break;

		case 3:
			strcpy(dia, "Miercoles");
			break;

		case 4:
			strcpy(dia, "Jueves");
			break;

		case 5:
			strcpy(dia, "Viernes");
			break;

		case 6:
			strcpy(dia, "Sabado");
			break;

		case 7:
			strcpy(dia, "Domingo");
			break;
	}

	printf("%d es %s", nDia, dia);
}
