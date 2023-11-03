#include <stdlib.h>
/**
 * malloc_checked - entry point
 * Description: checks allocated memory
 * @b: user input
 * Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);

	return (x);
}
