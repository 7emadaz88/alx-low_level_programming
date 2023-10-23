#include "main.h"

/**
 * _memcpy - entry point
 * Description: fills the first n bytes of the memory area pointed to by s
 * @src: user input
 * @dest: user input
 * @n: number of characters
 * Return: string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
