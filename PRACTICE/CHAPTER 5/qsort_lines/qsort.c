#include <string.h>
#include "./qsort_lines.h"

/*
 * qsort: ordena v[left] ... v[right] en orden creciente
 */
void qsort (char *v[], int left, int right) {
	int i;	/* contador de bucle */
	int last;	/*  */
	void swap (char *v[], int i, int j);

	if (left >= right)	/* si el array contiene menos de dos elementos: */
		return;	/* no hacer nada */
	swap(v, left, (left + right) / 2);	/* mover el elemento de la mitad a v[0] */
	last = left;
	for (i = left + 1; i <= right; ++i)
		if (strcmp(v[i], v[left]) < 0)
			swap(v, ++last, i);

	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}

/*
 * swap: intercambiar v[i] y v[j]
 */
void swap (char *v[], int i, int j) {
	char *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
