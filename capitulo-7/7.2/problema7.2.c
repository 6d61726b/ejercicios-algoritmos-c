// Problema 7.2
// Se tiene una tabla que detalla la fucturación emitida por un comercio durante el periodo de un mes,
// con el siguiente formato:

/*
 * nroFactura (numero entero de 8 digitos)
 * dia (numero entero entre 1 y 31)
 * importe (numero real)
 * codCliente (alfanumerico, 5 caracteres)
 */

// Los datos no necesariamente estan ordenados y pueden haber mas de una factura emitida en un mismo dia.
// Finaliza cuando se ingresa un nroFactura igual a cero.

/*
 * Se pide determinar e informar:
 * 1. Total facturado por dia, solo para aquellos dias en los que hubo facturacion.
 * 2. Dia de mayor facturacion (sera unico) y monto total facturado ese dia.
 */

#include <stdio.h>
#include "problema7.2.h"

int main()
{
    long nroFactura;
    int dia;
    double importe;
    char codCliente[5];

    // array de acumuladores
    double acumDia[31];

    // inicializo el array
    inicializarArray(acumDia);

    // leo la primer fila de la table 
    scanf("%ld %d %lf %s",&nroFactura,&dia,&importe,codCliente);
    
    while(nroFactura)
    {
        // acumulo el importe facturado en el acumulador correspondiente 
        acumDia[dia-1] = acumDia[dia-1]+importe;  

        // leo la siguiente fila
        scanf("%ld %d %lf %s",&nroFactura,&dia,&importe,codCliente); 
    }

    // muestro los totales facturados por cada dia
    mostrarTotales(acumDia);

    // determino y muestro el dia de mayor facturación
    diaMayorFacturacion(acumDia);

    return 0;
}