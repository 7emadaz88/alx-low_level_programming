#include "main.h"
#include "xstrlen.c"

/**
 * _strncat - entry point
 * Description: appends src to dest
 * @src: user input
 * @dest: user destination
 * @n: number of characters
 * Return: string
*/

char *_strncat(char *dest, char *src, int n)
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
	for (i = j; i < n + j; i++)
	{
		dest[i] = src[i - j];
	}
	return (dest);
}
