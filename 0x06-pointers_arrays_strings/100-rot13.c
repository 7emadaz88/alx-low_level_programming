#include "main.h"
#include "xstrlen.c"

/**
 * rot13 - entry point
 * Description: ciphering
 * @s: user input
 * Return: string
*/

char *rot13(char *s)
{
	int i;
	int j;
	char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int n = _strlen(s);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == d[j])
			{
				s[i] = e[j];
			}
		}
	}
	return (s);
}
