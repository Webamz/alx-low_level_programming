#include "main.h"
/**
 * sqrt_check - check for square root of c
 * @g: guess a sqrt
 * @c: int of sqrt
 * Return: -1 or sqrt of c
 */
int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}
/**
 * _sqrt_recursion - returns natural square of a number
 * @n: int to find sqrt of
 * Return: sqrt or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
