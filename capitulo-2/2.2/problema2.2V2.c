// Problema 2.2 V2
// Leer tres valores numericos enteros, indicar cual es el mayor, cual es el del medio y cual, el menor.
// Considerar que los tres valores seran diferentes.

#include <stdio.h>

// Definimos las macros
#define MAX(x, y) x>y?x:y
#define MIN(x, y) x<y?x:y

void problema2_2_V2();

void problema2_2_V2()
{
	int a, b, c;
	int mayor, medio, menor;

	printf("Ingrese tres valores: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a>b && a>c)
	{
		mayor = a;
		medio = MAX(b, c); // El mayor entre b y c, usando macro MAX
		menor = MIN(b, c); // El menor entre b y c, usando macro MIN
	}
	else
	{
		if(b>a && b>c)
		{
			mayor = b;
			medio = a>c?a:c; // El mayor entre a y c, usando if-inline
			menor = a<c?a:c; // El menor entre a y c, usando if-inline
		}
		else
		{
			mayor = c;
			medio = a>b?a:b; // El mayor entre a y b, usando if-inline
			menor = a<b?a:b; // El menor entre a y b, usando if-inline
		}
	}

	printf("Mayor: %d\n", mayor);
	printf("Medio: %d\n", medio);
	printf("Menor: %d\n", menor);
}
