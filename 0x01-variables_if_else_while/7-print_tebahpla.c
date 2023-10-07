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
	char T;

	for (T = 'z'; T >= 'a'; T--)
	{
		putchar(T);
	}
	putchar('\n');
	return (0);
}

