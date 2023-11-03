#include <stdlib.h>
/**
 * array_range - entry point
 * Description: creates array of integers
 * @min: user input
 * @max: user input
 * Return: pointer to created array
*/
int *array_range(int min, int max)
{
	int *x;
	int i;

	if (min > max)
		return (NULL);

	x = malloc(((max - min) * sizeof(int)) + 1);
	if (x == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		x[i] = i;

	return (x);
}
