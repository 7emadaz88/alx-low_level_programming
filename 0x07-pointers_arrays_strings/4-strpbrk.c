#include "main.h"
#include "xstrlen.c"

/**
 * _strpbrk - entry point
 * Description: fills the first n bytes of the memory area pointed to by s
 * @s: user input
 * @c: user input
 * Return: string
*/

char *_strpbrk(char *s, char *c)
{
	unsigned int n = 0;
	int i = 0, j = 0;

	for (i = 0; i < _strlen(s); i++)
	{
        while (j < _strlen(c))
			{
				if (c[j] != s[i])
				{
					j++;
				}
				else
				{
					return (s);
				}
			}
	}
	return (s);
}