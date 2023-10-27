#include "main.h"

/**
 * _strstr - entry point
 * Description: fills the first n bytes of the memory area pointed to by s
 * @s: user input
 * @c: user input
 * Return: string
*/

char *_strstr(char *s, char *c)
{
	int i = 0, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i + j] != c[j])
			{
				break;
			}
		}
		if (!c[j])
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
