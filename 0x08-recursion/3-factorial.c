#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: number inout
 * Return: result of @n factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
