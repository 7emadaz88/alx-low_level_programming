#include "main.h"
/**
 * _strlen_recursion - entry point
 * Description: string length
 * @s: user input
 * Return: int
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
