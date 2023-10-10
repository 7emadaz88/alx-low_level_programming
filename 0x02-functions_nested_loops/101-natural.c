#include <stdio.h>

/**
 * main - entry point
 *
 * Description: sum of numbers
 *
 * Return: always 0
*/

int main(void)
{
	int i;
	int b = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			b += i;
		}
	}
	printf("%i\n", b);
	return (0);
}
