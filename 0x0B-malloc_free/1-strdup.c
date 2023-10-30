#include <stdlib.h>
#include "main.h"
/**
 * strdup - entry point
 * creates a copy of the string given as a parameter
 * @size: user input
 * @c: user input
 * Return: pointer
*/
char *_strdup(char *str)
{
    char *x;
    int i, l = 0;

    while (str[l] != '\0')
        l++;

    x = malloc((l * sizeof(char)) + 1);
    if (x == NULL)
        return (NULL);

    for (i = 0; i < l; i++)
    {
        x[i] = str[i];
    }
    return (x);
}