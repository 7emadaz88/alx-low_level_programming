#include <stdlib.h>
/**
 * string_nconcat - entry point
 * Description: concatenate 2 strings
 * @s1: user input
 * @s2: user input
 * @n: user input
 * Return: pointer to allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1 = 0, l2 = 0;
	char *x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	if (n > l2)
		n = l2;

	x = malloc(l1 + n + 1);

	if (x == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		x[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		x[i + l1] = s2[i];
	}
	x[i + l1] = '\0';

	return (x);
}
