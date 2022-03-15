#include "main.h"
/**
 * print_sign - check mian
 * @n: input number
 * Description: Function prints the sign of the number
 * Return: 1 for positive, 0 for 0, -1 for negative
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
