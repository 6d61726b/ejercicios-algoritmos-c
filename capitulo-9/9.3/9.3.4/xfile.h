#ifndef XFILE_H
#define XFILE_H

// Abrir el archivo
Xfile xopen(char *nombreArchivo, char *modo, int recSize);

// Cerrar el archivo
void xclose(XFile *xFile);

// Leer un registro
void xread(XFile *xFile, void *registro);

// Escribir un registro
void xwrite(XFile *xFile, void *registro);

// Determinar si llego el fin del archivo
int xeof(XFile *xFile);

// Eliminar un registro
void xdelete(XFile* xFile, int recNo);

// Mover el indicador de posicion del archivo
void xseek(XFile* xFile, int recNo);

// Obtener la cantidad de registros
int xrecCount(XFile* xFile, int raw);

// Posiciona el puntero en el registro logico numero 0
void xreset(XFile* xFile);

// Retorna el numero de registro logico que actualmente esta siendo apuntado
int xcurrent(XFile* xFile);

#endif