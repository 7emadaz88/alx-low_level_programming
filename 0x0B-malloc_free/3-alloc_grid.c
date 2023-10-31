#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - entry point
* makes a 2 dimentional array
* @width: user input
* @height: user input
* Return: int pointer to 2 dimentional array
*/
int **alloc_grid(int width, int height)
{
	int **x;
	int *h;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	x = (int **) malloc(height * sizeof(int));
	x[h] = (int *) malloc(width * sizeof(int));

	if (x == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			x[i][j] = 0;
	}

	return (x);
}
