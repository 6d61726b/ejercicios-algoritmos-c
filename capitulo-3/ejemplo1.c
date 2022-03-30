// Ejemplo 1
// Desarrollo y uso de funcion "valorAbsoluto".

#include <stdio.h>

void ejemplo1();
double valorAbsolutoO(double); // Prototipo de la funcion

void ejemplo1()
{
	double numero, valorAbs;

	printf("Ingrese un valor numerico: ");
	scanf("%lf", &numero);

	valorAbs = valorAbsolutoO(numero);

	printf("El valor absoluto de %lf es: %lf", numero, valorAbs);
}

double valorAbsolutoO(double x) // Cabezera de la funcion
{
	// Cuerpo de la funcion
	double ret = x;

	if(ret < 0)
	{
		ret = -ret;
	}

	return ret;
}

/* Usando un if-inline
double valorAbsoluto(double x)
{
	return x<0?-x:x;
}
*/
