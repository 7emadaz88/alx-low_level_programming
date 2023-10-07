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

	for (T = '0'; T <= '9'; T++)
	{
		putchar(T);
	}
	for (T = 'a'; T <= 'f'; T++)
	{
		putchar(T);
	}
	putchar('\n');
	return (0);
}

