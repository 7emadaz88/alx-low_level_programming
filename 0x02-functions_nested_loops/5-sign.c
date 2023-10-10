#include "main.h"

/**
 * print_sign - entry point
 *
 * Description: makes a check on sign
 * @n: user input
 *
 * Return: 1 for pos, 0 for zero, -1 for neg
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
