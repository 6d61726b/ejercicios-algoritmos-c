#include <stdio.h>

// inicializa el array asignando 0 a cada uno de sus elementos
void inicializarArray(double arr[])
{
	for(int i=0;i<31;i++)
	{
		arr[i] = 0;
	}
}

// muestra los totales facturados por dia
void mostrarTotales(double arr[])
{
	int dia;

	printf("Totales facturados (dia, monto)\n");

	for (int i=0;i<31;i++)
	{
		if(arr[i]>0)
		{
			dia = i+1;
			printf("%d, $%lf\n",dia,arr[i]);
		}
	}
}

// obtiene el dia de mayor facturacion y lo muestra
void diaMayorFacturacion(double arr[])
{
	double max=0;
	int dia;

	for(int i=0;i<31;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			dia=i+1;
		}
	}
	
	printf("Dia de mayor facturacion: %d, $%lf\n",dia,max);
}