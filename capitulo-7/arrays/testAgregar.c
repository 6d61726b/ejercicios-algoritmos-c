#include <stdio.h>
#include "arrays.h"

int main()
{
	int arr[50];
	int len=0;  // la longitud inicial es cero

	agregar(arr,&len,3);
	agregar(arr,&len,5);
	agregar(arr,&len,7);
	agregar(arr,&len,9);

	for(int i=0;i<len;i++)
		printf("%d\n",arr[i]);

	return 0;
}