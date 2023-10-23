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
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
