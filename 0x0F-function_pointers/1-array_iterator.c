#include <stdlib.h>
/**
 * array_iterator - Entry point.
 * prints element in dec or hex
 * @array: user input
 * @size: user input
 * @action: user input
 * Return: nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size != 0 && array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
