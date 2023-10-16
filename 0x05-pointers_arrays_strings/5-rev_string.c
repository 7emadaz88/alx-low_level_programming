#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - entry point
 * Description: print reverse
 * @s: user input
 * Return: integer
*/

void rev_string(char *s)
{
	int i, n;
	char c;

	n = _strlen(s);
	for (i = 0; i < n / 2; i++)
	{
		c = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = c;
	}
}
