#include <stdlib.h>
#include "main.h"
/**
 * _strdup - entry point
 * Description: creates a copy of the string given as a parameter
 * @str: user input
 * Return: pointer
*/
char *_strdup(char *str)
{
	char *x;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	x = (char *)malloc((l * sizeof(char)) + 1);

	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		x[i] = str[i];
	}
	return (x);
}
