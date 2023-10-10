#include <stdio.h>
#include "main.h"
/**
 * print_times_table - main entery
 * Description: prints time table
 * @n: user input
 * Return: always void
*/
void print_times_table(int n)
{
	int i, j, m;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				m = i * j;
				if (j == 0)
				{
					printf("0");
				}
				else if (m <= 9)
				{
					printf(",   %d", m);
				}
				else if (m > 9 && m <= 99)
				{
					printf(",  %d%d", (m / 10), (m % 10));
				}
				else if (m > 99)
				{
					printf(", %d%d%d", (m / 100), ((m / 10) % 10), (m % 10));
				}
			}
				printf("\n");
		}
	}
}
