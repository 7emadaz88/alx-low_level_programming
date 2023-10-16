#include "main.h"

/**
 * _strlen - entry point
 * Description: calculate string length
 * @a: user input
 * Return: integer
*/

int _strlen(char *a)
{
	int i = 0;
	int n;

	while (i >= 0)
	{
		if (a[i] != '\0')
			i++;
		else
		{
			n = i;
			break;
		}
	}
	return (n);
}
