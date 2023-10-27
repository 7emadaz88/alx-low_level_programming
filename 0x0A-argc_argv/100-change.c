#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * number of coins
 * @argc: argument count
 * @argv: argument array
 * Return: zero
*/
int main(int argc, char *argv[])
{
	int x, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 1)
	{
		printf("0\n");
		return (0);
	}
	while (x > 0)
	{
		if (x >= 25)
		{
			c++;
			x -= 25;
		}
		else if (x >= 10)
		{
			c++;
			x -= 10;
		}
		else if (x >= 5)
		{
			c++;
			x -= 5;
		}
		else if (x >= 2)
		{
			c++;
			x -= 2;
		}
		else
		{
			c++;
			x--;
		}
	}
	printf("%i\n", c);
	return (0);
}
