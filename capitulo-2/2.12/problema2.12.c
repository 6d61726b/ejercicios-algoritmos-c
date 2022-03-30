// Problema 2.12
// Se tiene una tabla o planilla con los resultados de la ultima llamada a examen de una materia, con la siguiente informacion:
// matricula (valor numerico entero de 8 digitos)
// nota (valor numerico entero de 2 digitos entre 1 y 10)
// nombre (valor alfanumerico de 10 caracteres)
//
// Se pide informar:
// Cantidad de alumnos que se presentaron a rendir examen
// Nota promedio
// Nombbre y nota del alumno que obtuvo el mejor resultado (sera unico)
//
// Para indicar el fin del ingreso de datos el operador ingresara un registro nulo con matricula = 0, nota = 0 y nombre = "".

#include <stdio.h> // Biblioteca estandar de i/o
#include <string.h> // Biblioteca para manejo de cadenas de caracteres

void problema2_12();

void problema2_12()
{
	int cantPres, sumNota, maxNota;
	int matricula, nota;
	char nombre[10], nomMax[11];

	// Inicializo las variables
	cantPres = 0;
	sumNota = 0;
	maxNota = 0;

	printf("Ingrese matricula, nota y nombre: ");
	scanf("%d %d %s", &matricula, &nota, nombre);

	while(matricula != 0)
	{
		cantPres = cantPres + 1;
		sumNota = sumNota + nota;

		if(nota > maxNota)
		{
			maxNota = nota;
			strcpy(nomMax, nombre);
		}

		printf("Ingrese matricula, nota y nombre: ");
		scanf("%d %d %s", &matricula, &nota, nombre);
	}

	// Cantidad de presentaciones
	printf("Cantidad de presentaciones %d\n", cantPres);

	// Nota promedio
	double promedio = (double)sumNota / cantPres;
	printf("Nota promedio %lf\n", promedio);

	// Mejor alumno
	printf("Alumno de mejor rendimiento: %s, nota: %d\n", nomMax, maxNota);
}
