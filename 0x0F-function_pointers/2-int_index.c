#include <stdlib.h>
/**
 * int_index - Entry point.
 * searches for an integer
 * @array: user input
 * @size: user input
 * @cmp: user input
 * Return: integer.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j;

	if (array != NULL && size != 0 && cmp != NULL)
	{
		while (i < size)
		{
			j = cmp(array[i]);
			if (j == 0)
				i++;
			else
				break;
		}
		return (i);
	}
}
