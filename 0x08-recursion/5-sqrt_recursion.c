#include "main.h"
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
	return (_finder_sqrt(n, 0));
}
/**
 * _finder_sqrt - entry point
 * Description: square root of a number
 * @n: number to calculate the sqaure root of
 * @i: testing integer
 * Return: the resulting square root
*/
int _finder_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_finder_sqrt(n, i + 1));
}
