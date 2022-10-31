#include <stdio.h>
#include "arrays.h"

int main()
{
	int a[] = {5, 4, 3, 2, 1};
	int len = 5;

	ordenar(a, len);
	
	for (int i = 0; i < len; i++)	
		printf("%d\n", a[i]);
	return 0;
}