// Problema 3.4
// Desarrollar una funcion que reciba un valor numerico y que en cada invocacion sucesiva retorne cada uno de sus factores.
// El valor de retorno de la funcion debe ser booleano para indicar si se pudo obtener un nuevo factor o no.

// prototipos.h
// funciones.c => archivo actual
// problema3.4.V2.c

int factorizarr(int n, int* factor)
{
	static int temp = 0;

	// Si esta en 0 le asigno n
	if(temp == 0)
	{
		temp = n;
	}

	int i = 2;

	while(i <= temp && temp%i != 0)
	{
		i = i + 1;
	}

	*factor = i;
	temp = temp/i;

	return temp >= 1;
}
