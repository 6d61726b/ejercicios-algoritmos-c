// Funciones para char ( .c )

int esDigito(char c)
{
	return c >= '0' && c <= '9';
}

int esLetra(char c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int esMinuscula(char c)
{
	return c >= 'a' && c <= 'z';
}

int esMayuscula(char c)
{
	return c >= 'A' && c <= 'Z';
}

char aMinuscula(char c)
{
	return esMayuscula(c)?c-'A'+'a':c;
}

char aMayuscula(char c)
{
	return esMinuscula(c)?c-'a'+'A':c;
}

/*
int esMinusculaOMayuscula(char c)
{
	char M = 'M';
	char m = 'm';
	char E = '!';

	char* MM = &M;
	char* mm = &m;
	char* e = &E;

	if(c >= 'a' && c <= 'z')
	{
		return *mm;
	}
	else if(c >= 'A' && c <= 'Z')
	{
		return *MM;
	}
	else
	{
		return *e;
	}
}
*/
