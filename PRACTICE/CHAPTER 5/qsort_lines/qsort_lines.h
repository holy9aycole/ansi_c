/*
 * readlines: leer lineas de entrada
 *
 * Parameters:
 *		linesptr	lineas de texto a leidas
 *		maxlines	cantidad maxima de lineas a leer
 *
 * Return:
 *		cantidad de linea leidas
 */
int readlines (char *linesptr[], int nlines);

/*
 * writelines: escribir lineas de texto en la salida estandar
 *
 * Parameters:
 *		linesptr	lineas de texto
 *		nlines		cantidad de lineas de texto
 */
void writelines (char *linesptr[], int nlines);

/*
 * qsort: ordena v[left] ... v[right] en orden creciente
 *
 * Parameters:
 *		linesptr	lineas de texto
 *		left		posicion de partida
 *		right		posicion final
 */
void qsort (char *linesptr[], int left, int right);
