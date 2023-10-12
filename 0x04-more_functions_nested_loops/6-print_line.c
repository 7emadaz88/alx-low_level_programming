#include "main.h"

/**
 * print_line - entry point
 * Description: prints _ number of times
 * @n: user input
 * Return: void
*/

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
