#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - entry point
 *
 * Description: prints to 98
 * @n: user input
 *
 * Return: always void
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
		printf("98\n");
	}
	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
		printf("98\n");
	}
	if (n == 98)
	{
		printf("98\n");
	}
}
