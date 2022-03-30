int agregar(int a[],int* len,int v)
{
	a[(*len)++]=v;
	return *len-1;
}

int buscar(int a[],int len,int v)
{
	int i=0; 
	while(i<len && a[i]!=v) i++;
	return i<len?i:-1;
}

int buscarYAgregar(int a[],int* len,int v,int* enc)
{
	int pos=buscar(a,*len,v);
	if(pos!=-1)*enc=1;
	else
	{ 
		*enc=0;
		pos=agregar(a,len,v);
	}
	return pos;
}