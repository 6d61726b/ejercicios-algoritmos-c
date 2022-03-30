// Ejemplo de funcion que recibe parametros por referencia (uso de punteros y direcciones de memoria)

// El puntero es un tipo de dato especial para guardar direcciones de memoria => tipoDato* nombre;
// El * se usa tambien para MOSTRAR y MODIFICAR el contenido al que apunta una variable puntero
// El & se usa para mostrar la direccion de memoria de una variable

#include <stdio.h>

void argumentosPorReferencia();
void permutar(int*, int*); // Prototipo que recibe dos parametros de tipo puntero a int (parametros por referencia)

void argumentosPorReferencia()
{
	int a, b;

	a = 5;
	b = 10;

	printf("Los valores son: %d y %d\n", a, b);

	permutar(&a, &b);
}

void permutar(int* x, int* y)
{
	int aux;

	// Asigno el contenido de x a la variable aux
	aux = *x;

	// Asigno el contenido de y al contenido de x
	*x = *y;

	// Asigno el valor de aux al contenido de y
	*y = aux;

	// Muestro la permutacion (* hace referencia al espacio de memoria direccionado por x e y)
	printf("Los nuevos valores son: %d y %d", *x, *y);
}
