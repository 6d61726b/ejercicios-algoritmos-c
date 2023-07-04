// Leer y escribir caracteres (funciones getc y putc)
// El siguiente programa abre dos archivos cuyos nombres recibe por linea de comandos.
// Luego lee caracteres del primero y los escribe en el segundo.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *archivo1 = fopen(argv[1], "r+");
	FILE *archivo2 = fopen(argv[2], "w+");

	char c;
	while (c = getc(archivo1) != EOF)
	{
		putc(c, archivo2);
	}

	fclose(archivo2);
	fclose(archivo1);

	return 0;
}