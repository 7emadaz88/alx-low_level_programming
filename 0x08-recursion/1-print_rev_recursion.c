#include "main.h"
/**
 * _print_rev_recursion - entry point
 * Description: prints a string backwards
 * @s: user input
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
