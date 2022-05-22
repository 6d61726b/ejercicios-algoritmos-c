#include <stdio.h>
#include "arrays.h"

int main()
{
	int arr[6];
	int len = 0;

	agregar(arr, &len, 0);
	agregar(arr, &len, 1);
	agregar(arr, &len, 2);
	agregar(arr, &len, 3);
	agregar(arr, &len, 4);
	agregar(arr, &len, 5);

	eliminar(arr, &len, 3);

	for (int i = 0; i < len; i++)
		printf("%d\n", arr[i]);
	return 0;
}