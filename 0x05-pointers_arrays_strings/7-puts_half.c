#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - entry point
 * Description: print half the string
 * @s: user input
 * Return: void
*/

void puts_half(char *s)
{
	int i, n, m;

	n = _strlen(s);
	if (n % 2 == 0)
	{
		m = (n / 2);
	}
	else
	{
		m = ((n - 1) / 2) + 1;
	}
	for (i = m; i < n; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
