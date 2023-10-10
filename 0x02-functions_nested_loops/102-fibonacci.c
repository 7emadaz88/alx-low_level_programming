#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 50 first fibonacci numbers
 *
 * Return: 0
*/

int main(void)
{
	long a = 1;
	long b = a + 1;
	long c = a + b;
	int i;

	printf("1, 2");
	for (i = 2; i < 50; i++)
	{
		a = b;
		b = c;
		c = a + b;
		printf(", %li", c);
	}
	printf("\n");
	return (0);
}
