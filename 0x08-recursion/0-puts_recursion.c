#include "main.h"
#include "xstrlen.c"

/**
 * _puts_recursion - entry point
 * Description: prints a string
 * @s: user input
 * Return: void
*/

void _puts_recursion(char *s)
{
    int n = 0;

    if (s[n] >= _strlen(s))
    {
        _putchar('\n');
        return;
    }
    
    _putchar(s[n]);
    _puts_recursion(s + 1);
}