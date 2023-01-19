#include <stdio.h>
#include <string.h>
#include "alumno.h"

Alumno crearAlumno(int matricula, char nombre[], int nota)
{
	Alumno x;

	x.matricula = matricula;
	strcpy(x.nombre, nombre);
	x.nota = nota;
	
	return x;
}

// Prototipo de una funcion que lee x consola los nuevos datos Alumno ingresoDatosXConsola();
Alumno ingresoDatosXConsola()
{
	int matricula, nota;
	char nombre[20];

	printf("Ingrese nueva matricula: ");
	scanf("%d", &matricula);

	printf("Ingrese nuevo nombre: ");
	scanf("%s", nombre);

	printf("Ingrese nueva nota: ");
	scanf("%d", &nota);

	Alumno x;
	x.matricula = matricula;
	strcpy(x.nombre, nombre);
	x.nota = nota;

	return x;
}