#include <stdio.h>
#include "arrays.h"

int main()
{
	int arr[50];
	int len=0;
	int enc;

	agregar(arr,&len,1);
	agregar(arr,&len,2);
	agregar(arr,&len,3);
	agregar(arr,&len,4);
	agregar(arr,&len,5);

	printf("1 esta en la posicion: %d\n",buscarYAgregar(arr,&len,1,&enc));
	printf("2 esta en la posicion: %d\n",buscarYAgregar(arr,&len,2,&enc));
	printf("3 esta en la posicion: %d\n",buscarYAgregar(arr,&len,3,&enc));
	printf("11 esta en la posicion: %d\n",buscarYAgregar(arr,&len,11,&enc));
	printf("9 esta en la posicion: %d\n",buscarYAgregar(arr,&len,9,&enc));

	return 0;
}