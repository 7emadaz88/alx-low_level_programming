#include "main.h"
#include "xstrlen.c"

/**
 * reverse_array - entry point
 * Description: reverse array
 * @a: array of int
 * @n: number of elements
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
