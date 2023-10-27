#include "main.h"

/**
 * _memset - entry point
 * Description: fills the first n bytes of the memory area pointed to by s
 * @s: user input
 * @b: contant byte
 * @n: number of characters
 * Return: string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
