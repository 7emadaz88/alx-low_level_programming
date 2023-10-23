#include "main.h"
#include "xstrlen.c"

/**
 * _strspn - entry point
 * Description: fills the first n bytes of the memory area pointed to by s
 * @s: user input
 * @c: user input
 * Return: string
*/

unsigned int _strspn(char *s, char *c)
{
	unsigned int n = 0;
	int i = 0, j = 0;

	while (i < _strlen(s))
	{
		if (j >= _strlen(c))
		{
			break;
		}
		else
		{
			while (j < _strlen(c))
			{
				if (c[j] == s[i])
				{
					i++;
					n++;
					j = 0;
					break;
				}
				else
				{
					j++;
				}
			}
		}
	}
	return (n);
}
