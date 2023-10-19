#include "main.h"
#include "xstrlen.c"

/**
 * leet - entry point
 * Description: encoding
 * @s: user input
 * Return: string
*/

char *leet(char *s)
{
	int i;
	int j;
	char d[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char e[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int n = _strlen(s);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == d[j])
			{
				s[i] = e[j];
			}
		}
	}
	return (s);
}
