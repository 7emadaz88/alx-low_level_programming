#include "main.h"
#include "xstrlen.c"

/**
 * _strcat - entry point
 * Description: appends src to dest
 * @src: user input
 * @dest: user destination
 * Return: string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (i >= 0)
	{
		if (dest[i] != '\0')
		{
			j++;
			i++;
		}
		else
		{
			break;
		}
	}
	for (i = j; i < _strlen(src) + j; i++)
	{
		dest[i] = src[i - j];
	}
	return (dest);
}
