#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"

int main()
{
	Empleado aEmp[4];
	int len = 0;

	agregarEmpleado(aEmp, &len, 23214, "Juan", crearFecha(2, 12, 2012));
	agregarEmpleado(aEmp, &len, 68842, "Marcos", crearFecha(6, 7, 2015));
	agregarEmpleado(aEmp, &len, 46317, "Agustin", crearFecha(11, 4, 2016));
	agregarEmpleado(aEmp, &len, 25214, "Claudio", crearFecha(6, 6, 2013));

	for (int i = 0; i < len; i++) 
	{
		mostrarEmpleado(aEmp, i);
		printf("\n");
	}

	return 0;
}