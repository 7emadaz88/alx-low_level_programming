#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * number of coins
 * @argc: argument count
 * @argv: argument array
 * Return: zero
*/
int main(int argc, char *argv[])
{
    int x, c = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    x = atoi(argv[2]);
    if (x < 1)
    {
        printf("0\n");
        return (0);
    }
    else
    {
        while (x > 0)
        {
            if (x % 25 == 0)
            {
                c++;
                x = x - 25;
            }
            else if (x % 10 == 0)
            {
                c++;
                x = x - 10;
            }
            else if (x % 5 == 0)
            {
                c++;
                x = x - 5;
            }
            else if (x % 2 == 0)
            {
                c++;
                x = x - 2;
            }
            else
            {
                c++;
                x = x - 1;
            }
        }
    }
    printf("%i", c);
    return (0);
}