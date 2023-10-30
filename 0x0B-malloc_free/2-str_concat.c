#include <stdlib.h>
#include "main.h"
/**
 * _concat - entry point
 * concatenates two strings
 * @s1: user input
 * @s2: user input
 * Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	int i, l1 = 0, l2 = 0;
	char *x;

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	x = (char *)malloc((l1 + l2) * sizeof(char));

	if (x == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		x[i] = s1[i];
	}

	for (i = 0; i < l2; i++)
	{
		x[i + l1] = s2[i];
	}

	return (x);
}
