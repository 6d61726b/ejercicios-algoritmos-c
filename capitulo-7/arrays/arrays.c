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
