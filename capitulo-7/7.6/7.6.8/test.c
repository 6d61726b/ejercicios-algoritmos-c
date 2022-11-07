#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"

int main()
{
	Nota nota1 = crearNota(10, crearFecha(2, 4, 2012));
	Nota nota2 = crearNota(10, crearFecha(15, 4, 2012));
	Nota nota3 = crearNota(9, crearFecha(22, 4, 2012));

	Nota notas[] = {nota1, nota2, nota3};
	Alumno marcos = crearAlumno("Marcos", 1234, notas);

	printf("Nombre del alumno: %s\n", marcos.nombre);
	printf("Matricula: %i\n", marcos.matricula);
	
	for (int i = 0; i < 3; i++) 
	{
		char* s = toString(marcos.notas[i].fecha);
		printf("Nota %i: %i el %s\n", i+1, marcos.notas[i].puntaje, s);
		free(s);
		s = NULL;
	}

	return 0;
}