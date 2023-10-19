#include "main.h"

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
	char *d = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *e = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == d[j])
			{
				s[i] = e[j];
				break;
			}
		}
	}
	return (s);
}
