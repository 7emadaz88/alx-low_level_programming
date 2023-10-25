#include "main.h"

int finder_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - entry point
 * Description: square root finder
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (finder_sqrt_recursion(n, 0));
}

/**
 * finder_sqrt_recursion - entry point
 * Description: square root of a number
 * @n: number to calculate the sqaure root of
 * @i: testing integer
 * Return: the resulting square root
 */
int finder_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (finder_sqrt_recursion(n, i + 1));
}