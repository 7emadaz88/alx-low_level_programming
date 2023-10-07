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
	int m;
	int a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (m = 0 ; m <= 9 ; m++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(m + '0');
					a = (i * 10) + j;
					if (a < 98)
					{
						putchar(',');
						putchar(' ');
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}

