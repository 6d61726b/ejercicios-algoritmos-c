// Problema 2.2
// Leer tres valores numericos enteros, indicar cual es el mayor, cual es el del medio y cual, el menor.
// Considerar que los tres valores seran diferentes.

#include <stdio.h>

void problema2_2();

void problema2_2()
{
	int a,b,c;
	int mayor,medio,menor;

	printf("Ingrese tres valores: ");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b)
	{
		if(a>c)
		{
			mayor=a;

			if(b>c)
			{
				medio=b;
				menor=c;
			}
			else
			{
				medio=c;
				menor=b;
			}
		}
		else
		{
			mayor=c;
			medio=a;
			menor=b;
		}
	}
	else
	{
		if(b>c)
		{
			mayor=b;

			if(a>c)
			{
				medio=a;
				menor=c;
			}
			else
			{
				medio=c;
				menor=a;
			}
		}
		else
		{
			mayor=c;
			medio=b;
			menor=a;
		}
	}

	printf("Mayor: %d\n",mayor);
	printf("Medio: %d\n",medio);
	printf("Menor: %d\n",menor);
}
