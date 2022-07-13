#include <stdio.h>
#include "main.h"
/**
 * reverse_array - function that print a string overwriting a string
 * @a: int
 * @n: int
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int aux;

	for (i = 0, j = n - 1; i < n / 2; j--, i++)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
	}
}
