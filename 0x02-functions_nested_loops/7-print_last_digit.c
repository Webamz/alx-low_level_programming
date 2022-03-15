#include "main.h"
/**
 * print_last_digit - check main
 * @x: integer input
 * Description: Function prints last digit of a number
 * Return:last digit of x
 */
int print_last_digit(int x)
{
	int n;

	if (x < 0)
		n = -1 * (x % 10);
	else
		n = x % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}
