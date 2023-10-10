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
	float a = 0;
	float b = a + 1;
	float c = a + b;
	int i;

	printf("1");
	for (i = 1; i < 98; i++)
	{
		a = b;
		b = c;
		c = a + b;
		printf(", %.0f", c);
	}
	printf("\n");
	return (0);
}
