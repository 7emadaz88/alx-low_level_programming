#include "main.h"
/**
 * _pow_recursion - entry point
 * Description: x to the power of y
 * @x: user input
 * @y: user input
 * Return: int
*/
int _pow_recursion(int x, int y)
{
    if (y == 0)
    {
        return (1);
    }

    if (x == 1)
    {
        return (1);
    }

    if (y < 0)
    {
        return (-1);
    }

    int n = 0;

    if (n < y)
    {
        return (x * _pow_recursion(x, n + 1));
    }
}