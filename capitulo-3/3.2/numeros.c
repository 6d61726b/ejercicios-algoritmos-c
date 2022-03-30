// Problema 3.2

// Estructura:

// fecha.h
// fecha.c => archivo actual
// problema3.2.c

int esPrimo(int n)
{
	int ok = 1;

	for(int i = 2; i < n && ok; i++)
	{
		if(n%i == 0)
		{
			ok = 0;
		}
	}

	return ok;
}
