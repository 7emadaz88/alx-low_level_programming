#include "main.h"

/**
 * print_number - main entry
 * Description:  prints numbers
 * @m: input
 * Return - void
*/

void print_number(int m)
{
	int n;

	if (m < 0)
	{
		_putchar('-');
		n = m * -1;
	}
	else if (m >= 0)
	{
		n = m;
	}
	if (n > 999)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else if (n > 99 && n < 999)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else if (n > 9 && n < 99)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
}

