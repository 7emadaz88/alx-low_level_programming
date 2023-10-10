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
	long double a = 1;
	long double b = a + 1;
	long double c = a + b;
	int i;

	printf("%.0Lf, %.0Lf, %.0Lf", a, b, c);
	for (i = 2; i < 97; i++)
	{
		a = b;
		b = c;
		c = a + b;
		printf(", %.0Lf", c);
	}
	printf("\n");
	return (0);
}
