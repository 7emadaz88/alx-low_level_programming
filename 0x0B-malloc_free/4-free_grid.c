#include <stdlib.h>
#include "main.h"
/**
* free_grid - entry point
* free 2 dimentional array
* @grid: user input
* @height: user input
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
