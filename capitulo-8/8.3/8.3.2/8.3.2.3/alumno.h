#ifndef ALUMNO
#define ALUMNO

typedef struct Alumno
{
	int matricula;
	char nombre[20];
	int nota;
} Alumno;

Alumno crearAlumno(int matricula, char nombre[], int nota);

// Prototipo de una funcion que lee x consola los nuevos datos Alumno ingresoDatosXConsola();
Alumno ingresoDatosXConsola();

#endif