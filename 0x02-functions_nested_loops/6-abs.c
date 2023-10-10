#include "main.h"

/**
 * _abs - entry point
 *
 * Description: gets absolute numbers.
 * @n: user input
 *
 * Return: n positive value
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}
