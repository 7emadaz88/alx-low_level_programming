#include "main.h"

/**
 * print_most_numbers - entry point
 * Description: prints from 0 to 9
 * Return: void
*/

void print_most_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}