#include "main.h"
#include "xstrlen.c"

/**
 * string_toupper - entry point
 * Description: change small letters to capital ones
 * @s: user input
 * Return: string
*/

char *string_toupper(char *s)
{
	int i;
	int n = _strlen(s);

	for (i = 0; i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}
