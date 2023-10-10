#include <stdio.h>

/**
 * main - entry point
 *
 * Description: fibonnaci numbers
 *
 * Return: 0
*/

int main(void)
{
	unsigned long a = 0;
	unsigned long b = a + 1;
	unsigned long c = a + b;
	int i;

	printf("1");
	for (i = 1; i < 98; i++)
	{
		a = b;
		b = c;
		c = a + b;
		printf(", %li", c);
	}
	printf("\n");
	return (0);
}
