#include <stdio.h>
/**
 * main - entry point
 * prints arguments
 * @argc: argument count
 * @argv: argument array
 * Return: zero
*/
int main(int argc, char *argv[])
{
	int i, j = 0, sum = 0;

	if (argc < 2)
    {
        printf("0\n");
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
            for (j = 0; j != '\0'; j++)
            {
                if (!(isdigit(argv[i][j])))
                {
                    printf("Error\n");
                    return (1);
                }
                else
                {
                    sum += atoi(argv[i]);
                }
            }
        }
    }
    return (0);
}