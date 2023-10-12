#include "main.h"

/**
 * _isupper - entry point
 * Description: checks upper case characters
 * @c: user input
 * Return: 1 for upper 0 for lower
*/

int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
