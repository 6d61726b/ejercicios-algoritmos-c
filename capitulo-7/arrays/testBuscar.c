#include <stdio.h>
#include "arrays.h"

int main()
{
	int arr[50];
	int len=0;

	agregar(arr,&len,2);
	agregar(arr,&len,3);
	agregar(arr,&len,5);
	agregar(arr,&len,7);
	agregar(arr,&len,9);

	printf("2 esta en la posicion: %d\n",buscar(arr,len,2));
	printf("3 esta en la posicion: %d\n",buscar(arr,len,3));
	printf("5 esta en la posicion: %d\n",buscar(arr,len,5));
	printf("7 esta en la posicion: %d\n",buscar(arr,len,7));
	printf("9 esta en la posicion: %d\n",buscar(arr,len,9));
	printf("10 esta en la posicion: %d\n",buscar(arr,len,10));

	return 0;
}