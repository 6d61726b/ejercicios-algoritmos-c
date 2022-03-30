// Problema 3.3
// Se dispone de un conjunto de valores que representan fechas expresadas como numeros enteros de 8 digitos con formato aaaammdd.
// 1. ¿Cuantas fechas corresponden al mes de marzo?
// 2. ¿Cuantas fechas corresponden a años bisiestos?
// 3. Verificar que si en una fecha el dia es 29 y el mes es 2 entonces que el año sea bisiesto. En caso contrario,
// mostrar un mensaje de error e informar, al final del proceso, la cantidad de veces que se registraron errores de este tipo.

// prototipos.h
// funciones.c
// problema3.3.c => archivo actual (seria mi main)

#include <stdio.h>

void problema3_3();

void problema3_3()
{
	long fecha;
	int anio, mes, dia;
	int cantMarzo, cantBisiesto, cantError;
	int anioBisiesto, hayError;

	cantMarzo = 0;
	cantBisiesto = 0;
	cantError = 0;

	printf("Ingrese una fecha: ");
	scanf("%ld", &fecha);

	while(fecha != 0)
	{
		divideFecha(fecha, &anio, &mes, &dia);
		anioBisiesto = esAnioBisiesto(anio);

		if(mes == 03)
		{
			cantMarzo++;
		}

		if(anioBisiesto == 0)
		{
			cantBisiesto++;
		}

		hayError = (dia == 29) && (mes == 2) && !anioBisiesto;

		if(hayError)
		{
			cantError = cantError + 1;
		}

		printf("Ingrese una fecha: ");
		scanf("%ld", &fecha);
	}

	printf("Fechas de marzo: %d\n", cantMarzo);
	printf("Años bisiestos: %d", cantBisiesto);
}
