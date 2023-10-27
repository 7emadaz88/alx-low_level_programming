#include "main.h"
#include "2-strlen.c"

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
	if (n > _strlen(src))
	{
		n = _strlen(src);
	}
	for (i = j; i < n + j; i++)
	{
		dest[i] = src[i - j];
	}
	return (dest);
}
