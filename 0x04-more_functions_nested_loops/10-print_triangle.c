#include "main.h"

/**
 * print_triangle - entry point
 * Description: prints triangle using #
 * @n: user input
 * Return: void
*/

void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = n - i - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i ; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
