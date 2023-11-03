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

	x = malloc(((max - min + 1) * sizeof(int *)));
	if (x == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		x[i - min] = i;

	return (x);
}
