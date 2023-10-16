#include "main.h"

/**
 * swap_int - entry point
 * Description: swap two integers
 * @a: user input
 * @b: user input 2
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
