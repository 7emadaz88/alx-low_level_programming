#include "main.h"

/**
 * _isdigit - entry point
 * Description: checks for digits
 * @c: user input
 * Return: 1 for digits 0 elsewise
*/

int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
