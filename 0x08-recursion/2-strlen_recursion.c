#include "main.h"
/**
 * _strlen_recursion - entry point
 * Description: string length
 * @s: user input
 * Return: int
*/
int _strlen_recursion(char *s)
{
    int n = 0;

    if (s[n] == '\0')
    {
        return 0;
    }
    n++;
    return (1 + _strlen_recursion(s));
}