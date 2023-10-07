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

	for (T = 'a'; T <= 'z'; T++)
	{
		putchar(T);
	}
	putchar('\n');
	return (0);
}

