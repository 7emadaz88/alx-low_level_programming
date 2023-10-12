#include <stdio.h>

/**
 * main - entry point
 * Description: finds biggest prime factor
 * Return: 0
*/

int main(void)
{
	long n = 612852475143;
	int i, c;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			c = i;
			i = 1;
			if (n / c == 1)
			{
				i = c;
			}
		}
	}
	printf("%d\n", c);
	return (0);
}
