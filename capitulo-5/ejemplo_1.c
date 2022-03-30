// Ejemplo 1: char[] y char*

#include <stdio.h>

void ejemplo_1();
void recibeArray(char[]); // Recibe un char[]
void recibePuntero(char*); // Recibe un char*

void ejemplo_1()
{
	char s[] = "Esta es una cadena";
	recibeArray(s); // Le paso la cadena s a la funcion recibeArray
	recibePuntero(s); // Le paso la cadena s a la funcion recibePuntero
}

void recibeArray(char x[])
{
	printf("x = %s\n", x);
	printf("x[3] = %c\n", x[3]);
}

void recibePuntero(char* x)
{
	printf("x = %s\n", x);
	printf("x[3] = %c\n", x[3]);
}
