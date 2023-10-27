#include <stdio.h>
/**
 * main - entry point
 * prints number of arguments
 * @argc: argument count
 * @argv: argument array
 * Return: zero
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
