#ifndef ALUMNO
#define ALUMNO

typedef struct Alumno
{
	int matricula;
	char nombre[20];
	int nota;
} Alumno;

Alumno crearAlumno(int matricula, char nombre[], int nota);

#endif