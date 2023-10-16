#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - entry point
 * Description: print every other char
 * @s: user input
 * Return: integer
*/

void puts2(char *s)
{
	int i, n;

	n = _strlen(s);
	for (i = 0; i < n; i += 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
