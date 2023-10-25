#include "main.h"
/**
 * _puts_recursion - entry point
 * Description: prints a string
 * @s: user input
 * Return: void
*/

void _puts_recursion(char *s)
{
	unsigned int n = 0;

	if (s[n] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[n]);
	_puts_recursion(s + 1);
}
