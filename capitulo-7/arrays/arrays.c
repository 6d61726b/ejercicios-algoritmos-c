int agregar(int a[], int* len, int v)
{
	a[(*len)++] = v;
	return *len - 1;
}

int buscar(int a[], int len, int v)
{
	int i = 0; 
	while(i < len && a[i] != v) i++;
	return i < len ? i : -1;
}

int buscarYAgregar(int a[], int* len, int v, int* enc)
{
	int pos=buscar(a, *len, v);
	if(pos != -1) *enc = 1;
	else
	{ 
		*enc = 0;
		pos = agregar(a, len, v);
	}
	return pos;
}

void insertar(int a[], int* len, int v, int pos) 
{
	for (int i = *len; i > pos; i--)
		a[i] = a[i-1];
	a[pos] = v;
	*len = *len+1;
}

void eliminar(int a[], int* len, int pos)
{
	for (int i = pos; i < *len-1; i++)
		a[i] = a[i+1];
	*len--;
}

int insertarEnOrden(int a[], int* len, int v)
{
	int i = 0;
	while (i < *len && a[i] <= v) i++;
	insertar(a, len, v, i);
	return i;
}

int buscarEnOrden(int a[], int len, int v, int* enc)
{
	int i = 0;
	while (i < len && a[i] < v) i++;
	*enc = i < len;
	return i;
}

int buscarEInsertarEnOrden(int a[], int* len, int v, int* enc)
{
	int pos = buscarEnOrden(a, *len, v, enc);
	return !*enc ? insertarEnOrden(a, len, v) : pos;
}

void ordenar(int a[], int len)
{
	int ordenado = 0;
	while (!ordenado) 
	{
		ordenado = 1;
		for (int i = 0; i < len-1; i++)
		{
			if (a[i] > a[i+1]) 
			{
				int aux = a[i];
				a[i] = a[i+1];
				a[i+1] = aux;
				ordenado = 0;
			}
		}
	}
}

int busquedaBinaria(int a[], int len, int v, int* enc)
{
	int i = 0;
	int j = len-1;
	int k = (i+j)/2;
	int encontrado = 0;

	while (!encontrado && i <= j)
	{
		if (a[k] > v) j = k-1;
		else if (a[k] < v) i = k+1;
		else encontrado = 1;
		k = (i+j)/2;
	}

	*enc = encontrado;
	return k;
}
