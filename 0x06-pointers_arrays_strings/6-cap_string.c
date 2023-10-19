#include "main.h"
#include "xstrlen.c"

/**
 * cap_string - entry point
 * Description: change small letters to capital ones
 * @s: user input
 * Return: string
*/

char *cap_string(char *s)
{
	int i;
	int n = _strlen(s);

	for (i = 0; i < n; i++)
	{
		int j = i - 1;

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[j] == ' ' || s[j] == ',')
			{
				s[i] = s[i] - 32;
			}
			else if (s[j] == '.' || s[j] == ';' || s[j] == '!')
			{
				s[i] = s[i] - 32;
			}
			else if (s[j] == '?' || s[j] == '"' || s[j] == '(')
			{
				s[i] = s[i] - 32;
			}
			else if (s[j] == ')' || s[j] == '{' || s[j] == '}')
			{
				s[i] = s[i] - 32;
			}
			else if ((s[j] == '\n'))
			{
				s[i] = s[i] - 32;
			}
			else if ((s[j] == '\t'))
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
