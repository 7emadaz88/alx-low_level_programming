#include "main.h"
#include "xstrlen.c"
/**
 * _print_rev_recursion - entry point
 * Description: prints a string backwards
 * @s: user input
 * Return: void
*/
void _print_rev_recursion(char *s)
{
    int n = _strlen(s);

    if (n >= 0)
    {
        _putchar(s[n]);
        _print_rev_recursion(s - 1);
    }
    _putchar('\n');
    return;
    
}