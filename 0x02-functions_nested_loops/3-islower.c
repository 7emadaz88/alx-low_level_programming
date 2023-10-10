#include "main.h"

/**
 * _islower - entry point
 *
 * Description: checks lower case
 *
 * @i: user input
 *
 * Return: 0 for false, 1 for true
*/

int _islower(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
		return (0);
}
