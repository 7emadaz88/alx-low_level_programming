#include "main.h"

/**
 * print_diagonal - entry point
 * Description: prints \ number of times
 * @n: user input
 * Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
