// Defino el tipo Fecha
typedef long Fecha;

// "crea" una Fecha
Fecha crearFecha(int, int, int);

// Dada una Fecha retorna el dia
int obtenerDia(Fecha);

// Dada una Fecha retorna el mes
int obtenerMes(Fecha);

// Dada una Fecha retorna el Anio
int obtenerAnio(Fecha);

// Dadas dos Fechas fecha1 y fecha2 retorna un valor que sera 
// mayor, menor o igual a cero segun fecha2 lo sea respecto de fecha1
int compararFechas(Fecha, Fecha);

// Dada una Fecha retorna una cadena con formato "dd/mm/aaaa"
char* toString(Fecha);