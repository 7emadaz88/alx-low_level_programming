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
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (*s == c[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
