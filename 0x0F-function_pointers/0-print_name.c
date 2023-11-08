#include <stdlib.h>
/**
 * print_name - Entry point.
 * prints name
 * @name: user input
 * @f: user input
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
