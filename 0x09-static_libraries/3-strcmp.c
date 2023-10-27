#include "main.h"
#include "2-strlen.c"

/**
 * _strcmp - entry point
 * Description: compare strings
 * @src: string 2
 * @dest: string 1
 * Return: int
*/

int _strcmp(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int n;

	if (_strlen(src) > _strlen(dest))
		j = _strlen(src);
	else if (_strlen(src) < _strlen(dest))
		j = _strlen(dest);
	else
		j = _strlen(dest);
	while (i < j)
	{
		if (dest[i] == src[i])
		{
			n = dest[i] - src[i];
			i++;
		}
		else if (dest[i] > src[i])
		{
			n = dest[i] - src[i];
			break;
		}
		else if (dest[i] < src[i])
		{
			n = dest[i] - src[i];
			break;
		}
	}
	return (n);
}
