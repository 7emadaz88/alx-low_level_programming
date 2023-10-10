#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - entry point
 *
 * Description: get last dig of a number
 * @n: user input
 *
 * Return: i
*/

int print_last_digit(int n)
{
	int i;
	int k;

	k = _abs(n);
	i = k % 10;
	_putchar(i + '0');
	return (i);
}
