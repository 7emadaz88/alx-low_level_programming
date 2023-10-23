#include "main.h"
#include "xstrlen.c"

/**
 * _strchr - entry point
 * Description: fills the first n bytes of the memory area pointed to by s
 * @s: user input
 * @c: user input
 * Return: string
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
	{
		return ('\0');
	}
	else
	{
		while (*s)
		{
			if (*(s + i) != c)
				i++;
			else
				return (s);
		}
	}
}
