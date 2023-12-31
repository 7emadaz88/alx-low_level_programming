#include <stdlib.h>
#include "main.h"
/**
 * create_array - entry point
 * creates array of chars
 * @size: user input
 * @c: user input
 * Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}
