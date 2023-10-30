#include <stdlib.h>
#include "main.h"
/**
 * create_array - entry point
 * creates array of chars
 * @size: user input
 * @c: user input
 * return: char
*/
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size * sizeof(char));
	int i;

	if (size == 0)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}
