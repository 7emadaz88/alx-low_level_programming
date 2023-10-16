#include "main.h"

/**
 * _puts - entry point
 * Description: print a string
 * @a: user input
 * Return: void
*/

void _puts(char *a)
{
	int i = 0;

	while (i >= 0)
	{
		if (a[i] != '\0')
		{
			_putchar(a[i]);
			i++;
		}
		else
		{
			_putchar('\n');
			break;
		}
	}
}
