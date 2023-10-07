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
	int i;
	int j;
	int k;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			k = (i * 10) + j;
			if (k < 89)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

