// Lectura y escritura en bloques (buffers)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	// Creo un buffer
	int bufferLen = atoi(argv[2]);
	char *buffer = (char*) malloc(bufferLen);

	// Abro el archivo
	FILE *archivo = fopen(argv[1], "r+b");

	// Tomo la hora actual (hora inicial)
	time_t horaInicial = time(NULL);

	// Leo bufferLen bytes
	int n = fread(buffer, 1, bufferLen, archivo);

	int i = 0;
	while (n == bufferLen)
	{
		i += bufferLen;
		n = fread(buffer, 1, bufferLen, archivo);
	}

	// Sumo el remanente
	i += n;

	fclose(archivo);

	// Tomo la hora actual (hora final)
	time_t horaFinal = time(NULL);

	// Obtengo la diferencia entre la hora inicial y la hora final
	double segundos = difftime(horaFinal, horaInicial);

	printf("Total bytes leidos: %d\n", i);
	printf("%.0lf segundos, buffer = %d bytes\n", segundos, bufferLen);

	free(buffer);
	
	return 0;
}