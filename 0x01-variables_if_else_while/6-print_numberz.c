#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints specific text'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		putchar(t + '0');
	}
	putchar('\n');
	return (0);
}
