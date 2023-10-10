#include "main.h"

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
	int m;

	if (n < 0)
	{
		m = n * -1;
		i = m % 10;
		_putchar(i + '0');
		return (i);
	}
	else
	{
		m = n;
		i = m % 10;
		_putchar(i + '0');
		return (i);
	}
}
