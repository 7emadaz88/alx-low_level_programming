#include "main.h"

/**
 * print_rev - entry point
 * Description: print reverse
 * @a: user input
 * Return: integer
*/

void print_rev(char *a)
{
	int i = 0;
	int j, n;

	while (i >= 0)
	{
		if (a[i] != '\0')
		{
			i++;
		}
		else
		{
			n = i;
			break;
		}
	}

	for (j = n; j >= 0; j--)
	{
		_putchar(a[j]);
	}
	_putchar('\n');
}
