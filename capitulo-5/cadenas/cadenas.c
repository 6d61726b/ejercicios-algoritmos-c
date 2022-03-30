#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int esPrefijo(char* x, char* p) // retrorna 1 o 0 segun y sea prefijo de x
{
	int n = strlen(p);
	return strncmp(x,p,n) == 0;
}

int esSufijo(char* x, char* s)
{
	int desde = strlen(x) - strlen(s);
	return strcmp(s, x+desde) == 0;
}

char* subString(char* c, int hasta, int desde)
{
	int lon = hasta-desde;
	char* ret = (char*) malloc(lon + 1);

	int j = 0;
	for(int i = desde; i < hasta; i++)
	{
		ret[j] = c[i];

		j = j + 1;
	}

	ret[j] = '\0';

	return ret;
}

char* ltrim(char* s)
{
	int n = strlen(s);

	int i = n;
	while(s[i] == ' ')
	{
		i = i + 1;
	}

	return subString(s, i, n);
}

char* rtrim(char* s)
{
	int i = strlen(s) - 1;
	while(s[i] == ' ')
	{
		i = i - 1;
	}

	return subString(s, 0, i+1);
}

char* trim(char* s)
{
	return ltrim(rtrim(s));
}
