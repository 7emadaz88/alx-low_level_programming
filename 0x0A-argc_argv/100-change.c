#include <stdio.h>
#include <stdlib.h>
#include "_coin_finder.c"
/**
 * main - entry point
 * number of coins
 * @argc: argument count
 * @argv: argument array
 * Return: zero
*/
int main(int argc, char *argv[])
{
	int x, coins = 0;

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
	else
	{
		coins = _coin_finder(x);
	}
	printf("%i\n", coins);
	return (0);
}
