#include "main.h"
#include <stdio.h>

/**
 * _strcpy - entry point
 * Description: copy string
 * @a: user input
 * @b: user input
 * Return: string
*/

char *_strcpy(char *a, char *b)
{
	int i = 0;

	while (i >= 0)
	{
		a[i] = b[i];
		if (a[i] != '\0')
			i++;
		else
			break;
	}
	return (a);
}
