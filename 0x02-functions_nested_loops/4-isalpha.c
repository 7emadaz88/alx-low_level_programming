#include "main.h"

/**
 * _isalpha - entry point
 *
 * Description: checks alphabet
 * @c: user input
 *
 * Return: 1 true, 0 false
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
