#include "main.h"

int finder_sqrt(int n, int i);

/**
 * _sqrt_recursion - entry point
 * Description: square root finder
 * @n: number to calculate the square root of
 * Return: the resulting square root
*/

/**
 * finder_sqrt - entry point
 * Description: square root of a number
 * @n: number to calculate the sqaure root of
 * @i: testing integer
 * Return: the resulting square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (finder_sqrt(n, 0));
}

int finder_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (finder_sqrt(n, i + 1));
}