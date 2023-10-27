#include <stdio.h>
/**
 * _coin_finder - entry point
 * prints program name
 * @x: user input
 * Return: int
*/
int _coin_finder(int x)
{
    int c = 0;
    while (x > 0)
        {
            if (x >= 25)
            {
                c++;
                x -= 25;
            }
            else if (x >= 10)
            {
                c++;
                x -= 10;
            }
            else if (x >= 5)
            {
                c++;
                x -= 5;
            }
            else if (x >= 2)
            {
                c++;
                x -= 2;
            }
            else
            {
                c++;
                x--;
            }
        }
    return (c);
}