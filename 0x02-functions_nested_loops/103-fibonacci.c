#include <stdio.h>

/**
 * main - entry point
 *
 * Description: fibonnaci number even sum
 *
 * Return: 0
*/

int main(void)
{
	long a = 0;
	long b = a + 1;
	long c = a + b;
	long sum = 0;

	while (c < 4000000)
	{
		a = b;
		b = c;
		c = a + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
