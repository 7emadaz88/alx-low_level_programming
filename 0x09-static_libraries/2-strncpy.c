#include "main.h"
#include "2-strlen.c"

/**
 * _strncpy - entry point
 * Description: appends src to dest
 * @src: user input
 * @dest: user destination
 * @n: number of characters
 * Return: string
*/

char *_strncpy(char *dest, char *src, int n)
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
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	if (n > _strlen(src))
	{
		for (i = _strlen(src) + 1; i < n; i++)
		{
			dest[i] = 0x00;
		}
	}
	return (dest);
}
