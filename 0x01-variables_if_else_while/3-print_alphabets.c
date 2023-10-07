#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints specific text
 *
 * Return: always (0) success
*/

int main(void)
{
	char T;

	for (T = 'a'; T <= 'z'; T++)
	{
		putchar(T);
	}
	for (T = 'A'; T <= 'Z'; T++)
	{
		putchar(T);
	}
	putchar('\n');
	return (0);
}
